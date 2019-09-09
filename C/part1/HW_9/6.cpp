#include <stdio.h>
#include <conio.h>
#include <math.h>

void task1();
void task2();
float x,f;

main(){
	task1();
	task2();
}

void task1(){
	printf("x=");
	scanf("%f",&x);
}

void task2(){
	if(x>0){
		f=2*sin(x);
		printf("f(%g)=2*sin %g=%g",x,x,f);
	}
	else if(x<=0){
		f=6-x;
		printf("f(%g)=6+%g=%g",x,fabs(x),f);
	}
}
