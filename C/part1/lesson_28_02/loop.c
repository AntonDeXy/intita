#include <stdio.h>

void task1();
void task2();
void task3();

main(){
//	task1();
	task2();
}

task1(){
	int a,b,sum;
	while(1){
		sum=0;
	printf("a = ");
	scanf("%i", &a);
	printf("b = ");
	scanf("%i", &b);
	
	while(sum<=a)
		sum=sum+b;
	sum=sum-b;
	printf("ost a/b = %i\n",a-sum);
	}
}

task2(){
	int a,b,sum,i;
	while(1){
		sum=0;
		i=0;
	printf("a = ");
	scanf("%i", &a);
	printf("b = ");
	scanf("%i", &b);
	
	while(sum<=a){
		sum=sum+b;
		i++;
	}
	i--;
	printf("a/b = %i\n",i);
	}
}
