


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num;
	char str[100];
	FILE *fptr;
	printf("argc: %d\n", argc);
	for(int i=0; i<argc; i++)
		printf("argv: %s\n", argv[i]);
	
	fptr =fopen(argv[1], "w");
	if (fptr!=NULL){
		fputs("hi im conan",fptr);
		fclose(fptr);
	}else{
		printf("x");
	}
	
	if((fptr =fopen(argv[1], "r"))==NULL){
		printf("Error");
		exit(1);
	}else{
		if(fgets(str,100,fptr)!=NULL)
			printf("%s",str);
		else
			printf("x2");
	}
	
	fclose(fptr);
	return 0;
}

