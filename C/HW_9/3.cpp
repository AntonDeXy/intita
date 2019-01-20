#include <conio.h>
#include <stdio.h>

void task1();
void task2();
void task3();
void task4();
void task4_2();
void task4_3();
float a,b,c,a_b,a_c;

main()
{
	task1(); //scan
	task2(); //vidstanyp
	task4();
	task4_2();
	task4_3();
	task3();
}

void task1(){
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	getch();
}
void task4(){
	if(b-a<0)
	a_b=a-b;	
	else()
	a_b=b-a;	
}
void task4_2(){
	if(c-a<0){
	a_c=a-c;	
	else
	a_c=c-a;
}
void task2(){
	printf("vid a do b = %.2f \n",b-a);
	printf("vid a do c = %.2f \n",c-a);
	a_b=b-a;
	a_c=c-a;
}
void task3(){
	if(a_b<a_c){
		printf("nayblyscha tochka - B (%.2f)",a_b);		
	}
	if(a_b>a_c)
		printf("nayblyscha tochka - C (%.2f)",a_c);
	if(a_b==a_c)
		printf("vidstani odnakovi do A (%i), do C (%i)",a_b,a_c);
}
