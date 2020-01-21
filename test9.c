#include <stdio.h>
#include <string.h>

void main(void){
  char *name = "harry potter";
  int i,j;
  j= strlen(name);
  for(i=0; i<j ;i++)
    printf("%c\n",*name++);
  printf("\n");
}
