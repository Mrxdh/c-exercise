#include  <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 0;
    int c;

    c = (++a, a *= 2, b = a * 5);

    printf("c = %d", c);

    c = ++a, a *= 2, b = a * 5;

    printf("c = %d", c);
    return 0;
}