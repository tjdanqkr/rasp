#include <stdio.h>
void name(char *a);
int main(){
  char *a;
  scanf("%s",&a);
  name(a);
  return 0;
}

void name(char *a){
  printf("%s",a);

}

