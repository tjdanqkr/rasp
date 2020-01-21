


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char c;
	FILE *fp;
	int n;
	long cur;
	char buf[BUFSIZ];
	char *str ="Hello";
	if((fp=fopen("unix.txt","r+"))==NULL){
		perror("fopen: unix.txt");
		exit(1);
	}
	
	while(!feof(fp)){
		c=fgetc(fp);
		printf("c == %c\n",c);
		if(c=='d'){
			cur = ftell(fp);
			n=fread(buf,sizeof(char),5,fp);
			buf[n]='\0';
			printf("offser cur = %d\n",(int)cur);
			printf("-- read str = %s \n" , buf);
			if(strcmp(buf,"kssud")==0){
				printf("if");
				fseek(fp,-6,SEEK_CUR);
				fprintf(fp,"%s",str);
			}else{
				
				printf("else");
			}
		}
		
		
	}
	
	fclose(fp);
	return 0;
}

