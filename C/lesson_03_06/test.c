#include<stdio.h>

main()
{
	char num[10] = "20";
	float tempNum=0;
	printf("%f",tempNum);
	sscanf(num,"%f", &tempNum);
	printf("\n\n\n%f",tempNum);
}
