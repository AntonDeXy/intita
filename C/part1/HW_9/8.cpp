#include <stdio.h>
#include <conio.h>
#include <math.h>

void task1();
void task2();
float x,x2;
int x1;	

main(){
	task1();
	task2();
}

void task1(){
	printf("x=");
	scanf("%f",&x);
}

void task2(){
	x1=x;
	x2=x1%2;
	if(x<0){
		printf("0");		
	}
	else if(x2==0){
		printf("1");
		}
	else {
		printf("-1");
	}
}
