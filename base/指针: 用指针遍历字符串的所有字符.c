#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 定义一个指针p
    char *p;

    // 定义一个数组s存放字符串
    char s[] = "mj";

    // 指针p指向字符串的首字符'm'
    p = s; // 或者 p = &s[0];

    for (; *p != '\0'; p++) {
        printf("%c \n", *p);
    }
    return 0;
}
