#include <stdio.h>
#include <stdlib.h>
void main (){
	char *name;
	name = malloc(sizeof(char)*20);
	printf("enter name:");
	scanf("%s ", name);
	printf("your name : %s\n",name);
	free(name);
}
