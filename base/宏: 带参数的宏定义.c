#include <stdio.h>

#define average(a, b) (a+b)/2

int main ()
{
    int a = average(10, 4);
    
    printf("平均值：%d", a);
    return 0;
}