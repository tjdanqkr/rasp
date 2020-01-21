
#include <stdio.h>
#include <string.h>
void main (int argc, char *argv[]){
int i,len=0 ;

printf("argc: %d\n", argc);
for(i=0; i<argc; i++)
	printf("argv: %s\n", argv[i]);


for(int i =0 ; i< strlen(argv[1]) ; i++){
		printf("%c",*(argv[1]+i));
		len=len+1;
	}
	printf("%d\n",len);

}
