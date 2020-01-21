#include <stdio.h>

void main(){
	char *pszData ="String";
	char szData[32];

	sprintf(szData, "%s" ,pszData);
	printf("%s\n", szData);
}
