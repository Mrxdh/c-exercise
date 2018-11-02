#include <stdio.h>

int sayLove() {
  printf("I Love imooc\n");
  return 0;
}

int dividLine() {
  printf("%s\n", "***************");
  return 0;
}

int main() {
  dividLine();
  sayLove();
  dividLine();
  return 0;
}
