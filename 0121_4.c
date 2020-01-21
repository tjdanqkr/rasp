
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	FILE *fptr;
	char str[100];
	
	if((fptr =fopen("/home/pi/c/test.txt", "r"))==NULL){
		printf("Error");
		exit(1);
	}else{
		fptr =fopen("/home/pi/c/test.txt", "r");
		if(fgets(str,100,fptr)!=NULL)
			printf("%s",str);
		else
			printf("x");
	}
	fscanf(fptr,"%d",&num);
	printf("value of n = %d\n",num);
	
	fclose(fptr);
	return 0;
}
