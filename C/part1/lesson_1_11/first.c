#include <stdio.h>
#include <conio.h>

float plus(float a, float b);
float min(float a, float b);
float div(float a, float b);
float mt(float a, float b);
void input();

float a,b;

main()
{
	input();
	printf("%.2f + %.2f = %.2f\n\n",a,b,plus(a,b));
	printf("%.2f - %.2f = %.2f\n\n",a,b,min(a,b));
	printf("%.2f / %.2f = %.2f\n\n",a,b,div(a,b));
	printf("%.2f * %.2f = %.2f\n\n",a,b,mt(a,b));
	getch();
}

float plus(float a, float b)
{
	return a+b;
}

float min(float a, float b)
{
	return a-b;
}

float div(float a, float b)
{
	return a/b;
}

float mt(float a, float b)
{
	return a*b;
}

void input()
{
	printf("a=");
	scanf("%f",&a);
	printf("a=");
	scanf("%f",&b);
}
