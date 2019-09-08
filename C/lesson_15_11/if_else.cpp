#include <conio.h>
#include <stdio.h>

void task1();

main()
{
	task1();
}

void task1(){
	int x1,x2,x3,plus=0,minus=0;
	
	printf("x1=");
	scanf("%i",&x1);
	printf("x2=");
	scanf("%i",&x2);
	printf("x3=");
	scanf("%i",&x3);
	
	if(x1>0) plus++;
	else if (x1<0) minus++;
	
	if(x2>0) plus++;
	else if (x2<0) minus++;
	
	if(x3>0) plus++;
	else if (x3<0) minus++;
	
	printf("dodatnyh - %i \nvidemnyh - %i ", plus, minus);
	getch();
}
