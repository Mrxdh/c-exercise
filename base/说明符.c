#include <stdio.h>

int main()
{

    // 下面两种写法是等价的
    short int s1 = 1;
    short s2 = 1;
    
    // 下面两种写法是等价的
    long int l1 = 2;
    long l2 = 2;
    
    // 可以连续使用2个long
    long long ll = 10;
    
    // 下面两种写法是等价的
    signed int si1 = 3;
    signed si2 = 3;
    
    // 下面两种写法是等价的
    unsigned int us1 = 4;
    unsigned us2 = 4;
    
    // 也可以同时使用2种修饰符
    signed short int ss = 5;
    unsigned long int ul = 5;

    return 0;
}