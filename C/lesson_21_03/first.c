#include <stdio.h>

void task12();
void task13();
void task14();
void task15();

main(){
//	task12();	
//	task13();	
	task14();
//	task15();
}

void task12(){
	int n, m=0, num=0;
	printf("Enter num: ");
	scanf("%i",&n);
	while(n!=0){
		num = n%10;
		n=n/10;
		m=m+num;
		m=m*10;
	}
	printf("%i",m);
}

void task13(){
	int n, m=0, num=0;
	printf("Enter num: ");
	scanf("%i",&n);
	while(n!=0){
		num = n%10;
		n=n/10;
		if(num%2 == 0){
			printf("True");
			return;
		}
	}
	printf("False");
}

void task14(){
	int n, m=0, num=0;
	printf("Enter num: ");
	scanf("%i",&n);
	while(n!=0){
		num = n%10;
		n=n/10;
		if(num%2 != 0){
			printf("True");
			return;
		}
	}
	printf("False");
}

void task15(){
	int n, max=0, num=2;
	printf("Enter num: ");
	scanf("%i",&n);
	
	max=n/2;
	
	while(num<=max){
		if(n%num==0){
			printf("Ne proste");
			return;
		}
		num++;
	}
	printf("Proste");
}
