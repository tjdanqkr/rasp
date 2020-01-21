#include <stdio.h>
int main(void) {
  char name[] = "Harry Potter";
  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o
  char *namePtr;
  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
  char* c="harry potter";
  printf("\n");
 // scanf("%s",c);
  while(*c != '\0')
    printf("%c\n" ,*c++);

}
