#include <stdio.h>
#include <string.h>
int main() {
  char s1[100] = "";
  char s2[] = "我爱,";
  char s3[] = "大米";

  strcat(s1, s2);
  strcat(s1, s3);

  printf("%s\n", s1);
  return 0;
}
