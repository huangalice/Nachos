#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv)
{
  int i;

  printf("%d arguments\n", argc);
  printf("argc address: %d\n", &argc);
  printf("argv address: %d\n", &argv);
  printf("local var i address: %d\n", &i);

  char * fmt = "arg %d: %s\n";
  printf("address of fmt: %d\n", &fmt);
  printf("address stored in fmt: %d\n", fmt);
  
  for (i=0; i<argc; i++)
    printf(fmt, i, argv[i]);

  return 0;
}
