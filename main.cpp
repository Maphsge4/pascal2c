#include "main.h"
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <windows.h>

class _Program;//暂时只需要前向声明（后面也尽量保持这种状态）

extern Type *ParseTreeHead;
extern FILE *yyin;

extern _Program *getProgram(Type *now);

extern int yydebug;
extern bool haveSemanticError;

extern void SemanticAnalyse(_Program *ASTRoot);

extern vector<string> lexicalErrorInformation;
extern vector<string> syntaxErrorInformation;
extern vector<string> semanticErrorInformation;
extern vector<string> semanticWarningInformation;

extern void codeGenerate(_Program *ASTRoot, string outName);

// extern "C"是C++特有的指令（C无法使用该指令），目的在于支持C++与C混合编程。
// extern "C"的作用是告诉C++编译器用C规则编译指定的代码（除函数重载外，extern “C”不影响C++其他特性）。
// 为什么要用C规则编译C++代码呢？
// 因为C和C++的编译规则不一样，主要区别体现在编译期间生成函数符号的规则不一致。
// C++比C出道晚，但是增加了很多优秀的功能，函数重载就是其中之一。由于C++需要支持重载，单纯的函数名无法区分出具体的函数，所以在编译阶段就需要将形参列表作为附加项增加到函数符号中。如以下代码
// 比如，MyFunction.s（源文件为.c文件）中定义的是Function，而main.s（源文件为.cpp文件）中调用的是_Z8Functionii，函数名不一样，所以连接的时候找不到函数实现。到这里我们知道C和C++编译期间后得到的函数符号不同，所以C++代码和C代码不能互相调用。
// 要想实现C、C++混合编程该怎么办呢？让编译后的函数符号一致;怎么一致呢？用extern "C"!
// 所以，extern “C”的作用就是告诉C++编译器，将指定的函数用C规则编译（注意，除了函数重载外，extern “C”不影响C++的其他特性），然后后面的事情就顺理成章了。
extern "C" {
int yyparse();
}

int errorCount = 0;
int errorBound = int(1e9 + 7); //默认错误上限，INF

map<string, string> argumentsExplanation;

void preProcess(string inName);

void outputErrors();


int main(int argc, char **argv) {
    system("chcp 65001");//控制台中文编码
//    argumentsExplanationInit();
    string inName = "PascalProgram.pas"; //默认输入文件名
    string outName = "CProgram.c"; //默认输出文件名
    string compilerName = "gcc"; //默认C编译器
    string exeName = "CProcess.exe"; //默认的编译C程序后获得的可执行文件名

    FILE *fp = NULL;
    fp = fopen(inName.c_str(), "r"); // 读入pas文件
    if (fp == NULL) {
        cout << "Cannot open PASCAL-S file " << inName.c_str() << " , please check it." << endl;
        exit(0);
    }
    fclose(fp);

    cout << "Now start pre process..." << endl;
    preProcess(inName); //预处理。因为pascal大小写没有区别，所以预处理把大写字母全部变成小写字母

    //通过将打开文件指针赋值为yyin，给词法分析程序提供输入
#ifdef _WIN32
    const char *sFile = "preProcessed.pas"; // 这是预处理完了的文件名
#elif __APPLE__
    const char *sFile = "preProcessed.pas";
#endif
    fp = fopen(sFile, "r");
    if (fp == NULL) {
        printf("Cannot open %s\n", sFile);
        return -1;
    }
    yyin = fp;
    cout << "Now start lex and syntax analyse..." << endl;
    haveSemanticError = false;
    yyparse();//调用语法分析程序
    fclose(fp);

    bool canContinueToSemanticAnalyse = true;

    if (lexicalErrorInformation.size()) //如果有词法错误
        canContinueToSemanticAnalyse = false;
    else
        cout << "Lex analyse succeed!!!" << endl << endl; //没有词法错误

    if (haveSemanticError) //如果有语法错误
        canContinueToSemanticAnalyse = false;
    else if (canContinueToSemanticAnalyse)
        cout << "Syntax analyse succeed!!!" << endl << endl;

    if (!canContinueToSemanticAnalyse) { //如果有词法或语法错误
        outputErrors();
        system("pause");
        return 0;
    }

    //开始语义分析
    cout << "Now start semantic analysing..." << endl;
    _Program *ASTRoot = getProgram(ParseTreeHead); // 这个ParseTreeHead应该是yacc生成的，extern变量
    SemanticAnalyse(ASTRoot);//语义分析

    outputErrors();

    if (semanticErrorInformation.size()) { //如果有语义错误
        system("pause");
        return 0;
    }

    cout << "Semantic analyse succeed!!!" << endl << endl;

    //代码生成
    cout << "Now start generating the C Program code..." << endl;
    codeGenerate(ASTRoot, outName);
    cout << "Code Generate succeed!!!" << endl;
    cout << "Please check C code in " << outName << endl << endl;


    return 0;
}

void preProcess(string inName) {
    ifstream fin(inName);
    ofstream fout("preProcessed.pas");
    string str;
    while (getline(fin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 'a' - 'A';
        }
        fout << endl << str;
    }
    fin.close();
    fout.close();
}

void outputErrors() {
    if (lexicalErrorInformation.size()) { //如果有词法错误
        cout << "************************Here are the lexical errors***********************" << endl;
        for (int i = 0; i < lexicalErrorInformation.size(); i++)
            cout << lexicalErrorInformation[i] << endl;
        cout << "********************Please correct your lexical errors********************" << endl << endl;
    }
    if (syntaxErrorInformation.size()) { //如果有语法错误
        cout << "************************Here are the syntax errors***********************" << endl;
        for (int i = 0; i < syntaxErrorInformation.size(); i++)
            cout << syntaxErrorInformation[i] << endl;
        cout << "********************Please correct your syntax errors********************" << endl << endl;
    }
    if (semanticWarningInformation.size()) { //如果有语义警告
        cout << "*****************************Here are the semantic warnings****************************" << endl;
        for (int i = 0; i < semanticWarningInformation.size(); i++)
            cout << semanticWarningInformation[i] << endl;
        cout << "********************Please pay attention to these semantic warnings********************" << endl
             << endl;
    }
    if (semanticErrorInformation.size()) { //如果有语义错误
        cout << "************************Here are the semantic errors***********************" << endl;
        for (int i = 0; i < semanticErrorInformation.size(); i++)
            cout << semanticErrorInformation[i] << endl;
        cout << "********************Please correct your semantic errors********************" << endl;
    }
}