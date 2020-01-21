#include <stdio.h>

int main(){
	const int maxin =5;
	int i;
	double num , ave, sum =0.0;
	for (i=1; i<=maxin; i++){
		printf("%d. Enter a number: ", i);
		scanf("%lf", &num);
		if(num< 0.0)
			goto jump;
		sum += num;
	}
	jump:
	ave = sum/(i-1);
	printf("Sum = %.2f\n",sum);
	printf("Average + %.2f", ave);
	return 0;
}
