#include <stdio.h>
int main(){
	int a= 5;
	char *c2 = "string";
	char c1[] ={'1','2','3','4','5','6'};
	char c[] = {'f','u','c','k'};
	printf("%d  %s  %s \n " , a , c, c1);
	printf("%s\n", c2);
	printf("%s\n", c2);
	printf("%s \n",*c2);
}
