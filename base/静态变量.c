#include <stdio.h>

int a;

void test() {
    static int b = 0;
    b++;
    
    int c = 0;
    c++;
    
    printf("b=%d, c=%d \n", b, c);
}

int main() {
    int i;
    // 连续调用3次test函数
    for (i = 0; i<3; i++) {
        test();
    }
    
    return 0;
}