#include  <stdio.h>

int main(int argc, char const *argv[])
{
    // 变量存储单元的第一个字节的地址就是该变量的地址。变量a的地址是ffc5，变量b的地址是ffc1。
    int a = 0x1D;
    printf("变量a的值为%d\n", a); // 十进制格式输出

    int age = 17;
    int no = 10;
    
    printf("age = %d, no = %d\n", age, no);

    printf("输出的常量为%d\n", 13);

    // &是一个地址运算符，&a表示取得变量a的地址。格式符%p是专门用来输出地址的
    printf("变量a的地址是：%p", &a);

    int d;
    
    // 变量在没有进行初始化之前，不要拿来使用，因为它里面存储的是一些垃圾数据
    printf("%d", d);

    return 0;
}
