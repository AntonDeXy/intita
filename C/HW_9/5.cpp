#include <stdio.h>
#include <conio.h>

void task1();
void task2();
void task3();
int x1,y1,x2,y2,x3,y3,x4,y4;

main(){
	task1();	
	task2();
	task3();
	printf("x4= %d\ny4= %d",x4,y4);
}

void task1(){
	printf("x1= ");
	scanf("%d",&x1);
	printf("y1= ");
	scanf("%d",&y1);
	printf("x2= ");
	scanf("%d",&x2);
	printf("y2= ");
	scanf("%d",&y2);
	printf("x3= ");
	scanf("%d",&x3);
	printf("y3= ");
	scanf("%d",&y3);
}

void task2(){
	if(x1==x2){
		x4=x3;
	}
	else if (x1==x3){
		x4=x2;
	}
	else{
		x4=x1;
	}
}

void task3(){
	if(y1==y2){
		y4=y3;
	}
	else if (y1==y3){
		y4=y2;
	}
	else{
		y4=y1;
	}
}
