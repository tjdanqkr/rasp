
#include <stdio.h>
#include <string.h>
int main()
{
	char *a="tjdanqkr";
	int len=0,len1=0;
	for(int i =0 ; i< strlen(a) ; i++){
		printf("%c",*(a+i));
		len=len+1;
	}
	printf("%d\n",len);
	for(int i =0 ; *(a+i) ; i++){
		printf("%c",*(a+i));
		len1=len1+1;
	}
	printf("%d\n",len1);
	
	
	return 0;
}

