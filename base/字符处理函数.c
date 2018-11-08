#include <stdio.h>

int getcharStr () {
    // 字符输入函数getchar
    char c;
    c = getchar();
    return 0;
}

int strlenStr () {
    int size = strlen("mj"); // 长度为2
 
    char s1[] = "lmj";
    int size1 = strlen(s1); // 长度为3
    
    // strlen函数会从s2的首地址开始计算字符个数，直到遇到空字符\0为止。因为s2的第1个\0之前只有mj这2个字符，所以长度为2。
    char s2[] = {'m', 'j', '\0', 'l', 'm', 'j', '\0'};
    int size2 = strlen(s2); // 长度为2

    return 0;
}

int strcpyStr () {
    char s[10];
    char c[] = {'m', 'j', '\0', 'l', 'm', 'j', '\0'};
    return 0;
}

int strcatStr () {
    char s1[30] = "LOVE";
    strcat(s1, "OC");
    return 0;
}

int strcmpStr () {
    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "aBc";
    char s4[] = "ccb";

    printf("%d, %d, %d", strcmp(s1, s2), strcmp(s1, s3), strcmp(s1, s4));
    return 0;
}

int main(int argc, char const *argv[])
{
    putchar(65); // A

    putchar('A'); // A

    int a = 65;
    putchar(a); // A

    // putchar一次只能输出一个字符，而printf可以同时输出多个字符
    printf("%c %c %c\n", 'A', 'B', 'a');
    strlenStr();
    return 0;
}
