#include <stdio.h>
#include <math.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();
void task13();
void task14();
void task15();
void task16();
void task17();
void task18();
void task19();
void task20();
void task21();
void task22();
void task23();
void task24();

main(){
	int tnum;
	printf("Task num = ");
	scanf("%i",&tnum);
	switch (tnum)
	{
		case 1:task1();break;
		case 2:task2();break;
		case 3:task3();break;
		case 4:task4();break;
		case 5:task5();break;
		case 6:task6();break;
		case 7:task7();break;
		case 8:task8();break;
		case 9:task9();break;
		case 10:task10();break;
		case 11:task11();break;
		case 12:task12();break;
		case 13:task13();break;
		case 14:task14();break;
		case 15:task15();break;
		case 16:task16();break;
		case 17:task17();break;
		case 18:task18();break;
		// case 19:task19();break;
		case 20:task20();break;
		case 21:task21();break;
		case 22:task22();break;
		// case 23:task23();break;
		// case 24:task24();break;
		default:printf("This task not found");break;
	}
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

task2(){
	int count=0,num,a,b,c;

	for(num=100;num<=999;num++){
		a=num%10;
		b=(num/10)%10;
		if(a!=b){
			c=num/100;
			if(a==c || a==b || b==c){
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
}

task8(){
	int n1,n2,c,num=0;
	printf("Number= ");
	scanf("%i",&n1);
	printf("Second number= ");
	scanf("%i",&n2);

	if(n1>n2){
		c=n1;
		n1=n2;
		n2=c;
	}

	while(num<=n2){
		if(n1%n2!=0 && n1%5==0 && n2%5==0){
			printf("%i",num);
		}
		num++;
	}
}

task9(){
	int a,sum,b=1,c;
	printf("Number= ");
	scanf("%i",&a);
	while(b<a){
		if(b%2!=0){
			c=b;
			sum=sum+c;
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
	int k,n,t;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	t=k;
	while(t<=n){
		printf("%i",t);
		t++;
	}		
}

task14(){
	int k,n,t;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	t=n;
	while(t>=k){
		printf("%i",t);
		t--;
	}		
}

task15(){
	int k,n,t,sum;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=n){
		sum=sum+t;
		t++;
	}
	printf("%i",sum);
}

task16(){
	int k,n,t,sum;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=n){
		sum=sum*t;
		t++;
	}	
	printf("%i",sum);	
}


task17(){
	int k,n,t,sum,kv;
	
	printf("Number= ");
	scanf("%i",&k);
	printf("Second number= ");
	scanf("%i",&n);
	while(t<=n){
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
		t++;
	}
}

task22(){
	int a,n,sq,t=1,sum=0;
	printf("Number= ");
	scanf("%i",&a);
	printf("Stepin= ");
	scanf("%i",&n);
	while(t<n){
		sq = pow (a, t);
		sum=sum+sq;
		// printf("%i v stepini %i = %i\n",a,t,sq);
		t++;
	}
	printf("Sum = %i",sum);
}


