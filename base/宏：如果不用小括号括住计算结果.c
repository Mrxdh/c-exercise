#include <stdio.h>

#define Pow(a) (a) * (a)
// #define Pow(a) ( (a) * (a) )

int main(int argc, const char * argv[]) {
    int b = Pow(10) / Pow(2);
    
    printf("%d", b);
    return 0;
}

// 1> 宏定义不涉及存储空间的分配、参数类型匹配、参数传递、返回值问题

// 2> 函数调用在程序运行时执行，而宏替换只在编译预处理阶段进行。所以带参数的宏比函数具有更高的执行效率