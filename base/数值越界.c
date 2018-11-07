#include <stdio.h>

int main()
{   
    // int类型能保存的最大值是2^31-1。在第6行给int类型的变量c赋值一个比2^31-1大的数值：2^32 （1024是2^10）
    int c = 1024 * 1024 * 1024 * 4;
    
    printf("%d\n", c);
    return 0;
}