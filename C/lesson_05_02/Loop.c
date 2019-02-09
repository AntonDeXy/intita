#include <stdio.h>

void task1();
void task3();
void task4();
void task7();
void task18();

main(){

//	task1();
//	task3();	
//	task4();
//	task7();
		task18();
}

task1(){
	int count=0,num,a,b,c;
	
	for(num=100;num<=999;num++){
		a=num%10;
		b=(num/10)%10;
		if(a!=b){
			c=num/100;
			if(a!=c && b!=c){
				printf("%i ",num);
				count++;
			}
		}
	}
	printf("\ncount = %i",count);	
}

task3(){
	int a,b=0;
	printf("Number= ");
	scanf("%i",&a);
	while(b<=a){
		b=b+1;
		if(a%b==0){
			printf("%i ",b);
		}
	}
}

task4(){
	int a,a2,min,b=0;
	printf("Number= ");
	scanf("%i",&a);
	printf("Second number= ");
	scanf("%i",&a2);
	
	if(a<a2){
		min=a;
	}	else{
		min=a2;
	}
	while(b<=min){
		b=b+1;
		if(a%b==0 && a2%b==0){
			printf("%i ",b);
		}
	}
}


task7(){
	int a,b,c,sum=0;
	printf("Number= ");
	scanf("%i",&a);
	printf("Second number= ");
	scanf("%i",&b);
	c=a;
	
	while(c<=b){
		if(c%5==0 || c%7==0){
			sum=sum+c;
			printf("%i ", c);
		}
		c=c+1;
	}
	printf("\nsumma=%i",sum);
	
//	printf("%i+%i=%i",a,a2,a+a2);
}

task18(){
	int i,num;
	float dill,sum;
	
	printf("Enter number= ");
	scanf("%i",&num);
	
	for(num=0; num<=i; num++){
		dill=1/num;
		sum=sum+dill;
	}
	printf("%i",sum);
}
