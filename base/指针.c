#include <stdio.h>

// 如果没有指针，在一个函数的内部根本改变不了外部的实参

//在定义的同时初始化
int m1 () {
    // 定义int类型的变量a
    int a = 10;

    // 定义一个指针变量p
    // 并将变量a的地址赋值给指针变量p，所以指针变量p指向变量a
    // 指针变量是用来存放变量地址的，不要给它随意赋值一个常数
    int *p = &a;

    return 0;
}

// 给指针指向的变量赋值
int m2 () {
    char a = 10;
    printf("修改前，a的值：%d\n", a);

    // 指针变量p指向变量a
    char *p = &a;

    // 通过指针变量p间接修改变量a的值
    *p = 9;

    printf("修改后，a的值：%d", a);
    return 0;
}

// 取出指针所指向变量的值
int m3 () {
    // 定义2个int型变量
    int a = 6, b;

    // 定义一个指向变量b的指针变量p
    int *p;
    p = &b;

    // 将a的值赋值给变量b
    *p = a;
    return 0;
}

int m4 () {
    int i = 2;
    char c = 1;

    // 定义一个指向char类型的指针
    int *p = &c;

    // 取出
    printf("%d", *p);
    return 0;
}

int main(int argc, char const *argv[])
{
    
    // 定义int类型的变量a
    int a = 10;

    // 定义一个指针变量p
    int *p;

    // 将变量a的地址赋值给指针变量p，所以指针变量p指向变量a
    p = &a;

    m4();
    return 0;
}
