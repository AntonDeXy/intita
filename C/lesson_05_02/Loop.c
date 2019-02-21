#include <stdio.h>

void task1();
//void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task18();

main(){

//	task1();
//	task3();	
//	task4();
	task5();
	task6();
//	task7();
	task8();
	task9();
	task10();
//		task18();
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

task5(){
	int a,b,c;
	
	printf("First num: ");
	scanf("%i",&a);
	printf("Second num: ");
	scanf("%i",&b);
	
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	
	while(a<b){
		if(a%3==0 &&
		 a%5!=0){
			printf("%i ",a);
		}
		a++;
	}
}

task6(){
	int a,b,c;
	
	printf("First num: ");
	scanf("%i",&a);
	printf("Second num: ");
	scanf("%i",&b);
	
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	
	while(a<b){
		if(a%4==0 && a%6!=0){
			printf("%i ",a);
		}
		a++;
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

task9(){
	int a,sum,b=1,c;
	printf("Number= ");
	scanf("%i",&a);
	while(b<a){
		if(b%2!=0){
			c=квадратb;
			sum=sum+c
		}
		b++;
	}
	printf("Sum = %i",sum);
}

task10(){
	int n1,n2,b=0,c;
	
	printf("First number= ");
	scanf("%i",&n1);
	printf("Second number= ");
	scanf("%i",&n2);
	
	if(n1>n2){
		c=n1;
		n1=b;
		n2=c;
	}
	
	while(b<n2){
		if(b%2==0 && b%3==0){
			printf("%i ",b);
		}
		
		b++;
	}
}

task11(){
	int a,b,c,sum=0;
	
	printf("First number= ");
	scanf("%i",&a);
	printf("Second number= ");
	scanf("%i",&b);
	
	if(a>b){
		c=a;
		a=b;
		b=c;
	}	
	
	while(a<=b){
		if(a%2!=0){
			sum=sum+a;
		}
	}
	printf("Sum = %i",sum);
}

task12(){
	int k,n,t=0;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Times= ");
	scanf("%i",&n);
	
	while(t<n){
		printf("%i",k);
		t++;
	}	
}

task13(){
	int a,b,t;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	t=a;
	while(t<=b){
		printf("%i",y);
		t++;
	}		
}

task14(){
	int a,b,t;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	t=b;
	while(t>=a){
		printf("%i",y);
		t--;
	}		
}

task15(){
	int a,b,t,sum;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=b){
		sum=sum+t;
		t++;
	}
	printf("%i",sum);
}

task16(){
	int a,b,t,sum;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=b){
		sum=sum*t;
		t++;
	}	
	printf("%i",sum);	
}


task17(){
	int a,b,t,sum,kv;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=b){
		kv=t*t;
		sum=sum+kv;
		t++;
	}		
	printf("%i",sum);
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

task20(){
	int a,n,sq;
	printf("Number= ");
	scanf("%i",&a);
	printf("Stepin= ");
	scanf("%i",&n);
	sq=pow(a,n);
	printf("%i",sq);
}

task21(){
	int a,n,sq,t=1;
	printf("Number= ");
	scanf("%i",&a);
	printf("Stepin= ");
	scanf("%i",&n);
	while(t<n){
		sq=pow(a,t);
		printf("%i v stepini %i = %i\n",a,t,sq);
		t++
	}
	
}


