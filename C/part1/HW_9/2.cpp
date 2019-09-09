#include <conio.h>
#include <stdio.h>

void task1();

main()
{
	task1();
}

void task1(){
	float a,b,c;
	
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	
	printf("a= %.2f \nb= %.2f", a,b);
	getch();
}
