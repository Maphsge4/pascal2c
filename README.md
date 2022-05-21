# Pascal-S 语言编译程序

开发环境：win10、ubuntu20.04

工具：CLion 2021.3



### LEX 与 YACC 程序生成方法

在ubuntu系统运行lex与yacc程序，首先安装

```
sudo apt-get install flex bison
```

目录中至少需要存在lex.i、yacc.y、yacc.tab.h、main.h，然后运行：

``` 
flex lex.i
mv lex.yy.c lex.yy.cpp

bison -v -d --debug yacc.y
mv yacc.tab.c yacc.tab.cpp
```

-v 生成yacc.output，是包含对解析器的人类可读的描述

然后把新生成的yacc.tab.cpp 和 lex.yy.cpp放入CLion工程文件中



### 程序编译运行方法

在cmake-build-debug目录中的PascalProgram.pas中写入需要编译的Pascal程序，运行后在该目录下的CProgram.c文件中输出编译后生成的C语言代码