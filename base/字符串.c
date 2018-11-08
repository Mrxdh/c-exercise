#include <stdio.h>

int initStr () {
    char a[3] = {'m', 'j', '\0'}; // 添加了结束符\0

    char b[] = {'i', 's'}; // 假设忘记添加结束符\0

    printf("字符串a：%s", a); // 输出字符串a

    printf("\n"); // 换行

    printf("字符串b：%s", b); // 输出字符串b
    //%s表示期望输出一个字符串，因此printf函数会从b的首地址开始按顺序输出字符，一直到\0字符为止，因为\0是字符串的结束标记。
    return 0;
}

int putsStr () {
    printf("%s - %s", "mj", "lmj");
    puts("lmj");
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[3] = {'m', 'j', '\0'};

    char b[3];
    b[0] = 'm';
    b[1] = 'j';
    b[2] = '\0';

    char c[3] = "mj";

    char d[] = "mj";

    char e[20] = "mj";
    printf("%s\n", e);

    initStr();
    putsStr();
    return 0;
}
