#include <stdio.h>
#include <conio.h>

void plus(float a[]);
void min(float a[]);
void div(float a[]);
void mt(float a[]);
void input(float a[]);



main()
{
	float a[6];
	input (a);
	plus(a);
	min(a);
	div(a);
	mt(a);
	printf("%.2f + %.2f = %.2f\n\n",a[0],a[1],a[2]);
	printf("%.2f - %.2f = %.2f\n\n",a[0],a[1],a[3]);
	printf("%.2f / %.2f = %.2f\n\n",a[0],a[1],a[4]);
	printf("%.2f * %.2f = %.2f\n\n",a[0],a[1],a[5]);
	getch();
}

void plus(float a[])
{
	a[2]=a[0]+a[1];
}

void min(float a[])
{
	a[3]=a[0]-a[1];
}

void div(float a[])
{
	a[4]=a[0]/a[1];
}

void mt(float a[])
{
	a[5]=a[0]*a[1];
}

void input(float a[])
{
	printf("a=");
	scanf("%f",&a[0]);
	printf("b=");
	scanf("%f",&a[1]);
}
