#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{ // 入口函数；

  char name[20] = "邦邦";

  char a = u'邦';

  int len = strlen(name);

  for (int i = 0; i < 40; i++)
  {
    printf("%c", name[i]);
  }

  printf("我是谁%zd，%s %d", sizeof a, name, len);
  return 0;
}