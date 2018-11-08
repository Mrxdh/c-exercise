#include  <stdio.h>

int test1() {
 
    int a[5];
     
    printf("\na的地址是%d\n",a);
  
    printf("a的地址是%d",&a[0]);
 
    return 0;
}

int main(int argc, char const *argv[])
{
    int size = sizeof(10);
    printf("10所占的字节数：%d", size);

    sizeof(10);

    char c = 'a';
    printf("10所占的字节数：%d", (int)sizeof(c));
    sizeof(float);
    
    test1();

    return 0;
}