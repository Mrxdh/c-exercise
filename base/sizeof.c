#include  <stdio.h>

int main(int argc, char const *argv[])
{
    int size = sizeof(10);
    printf("10所占的字节数：%d", size);

    sizeof(10);

    char c = 'a';
    printf("10所占的字节数：%d", (int)sizeof(c));

    sizeof(float);

    return 0;
}