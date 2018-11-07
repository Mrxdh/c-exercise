#include <stdio.h>

int main()
{   
    // implicit conversion from 'double' to 'int' changes value from 10.7 to 10 [-Wliteral-conversion]
    int i = 10.7;
    
    printf("%d \n", i);

    // 显示的强制类型转换
    i = (int) 10.7;

    printf("%d \n", i);


    int a = 198l; // long 转换为 int
    
    char b = 65; // int 转换为 char
    
    int c = 19.5f; // float 转换为 int


    int e = 10;
    // “小类型”转为“大类型”
    double f = (double)e  + 9.6;

    return 0;
}