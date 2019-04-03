#include <stdio.h>
#include <time.h>
void task1();
void task2();
void task3();
void task4();
void task5a();
void task5b();
void task5c();

main(){
	// task1();
	// task2();
	// task3();
	// task4();
	// task5a();
	// task5b();
	task5c();
}

void task1(){
	int arr[50];
	int N, i, sum = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10)*0.1;
		printf("%i ",arr[i]);	
	}
	for(i=N-1; i>=0; i--){
		if(arr[i]>0) sum = sum + arr[i];
	}
	printf("\nsuma dodatnyh = %i",sum);
}

void task2(){
	int arr[50];
	int N, i, sum = 1;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = rand() %21 - 10;
		printf("%i ",arr[i]);	
	}
	for(i=N-1; i>=0; i--){
		if(arr[i]!=0) sum = sum * arr[i];
	}
	printf("\ndobytok = %i",sum);
}


void task3(){
	float arr[50];
	int N, i;
	float sum = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10 )* 0.1;
		printf("%g ",arr[i]);	
		sum = sum + arr[i];
	}
	sum = sum / i;
	printf("\n seredne = %g",sum);
}

void task4(){
	float arr[50];
	int N, i;
	float sum = 0, dob = 1;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10 )* 0.1;
		printf("%g ",arr[i]);	
		sum = sum + arr[i];
		dob = dob * arr[i];
	}
	printf("\n suma = %g",sum);
	printf("\n dobytok = %g",dob);
}

void task5a(){
	float arr[50];
	int N, i, num;
	// float sum = 0, dob = 1;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %210)* 0.1;
		num = arr[i];
		printf("%d ",num);	
	}
}

void task5b(){
	float arr[50], drob;
	int N, i, num;
	// float sum = 0, dob = 1;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %210)* 0.1;
		printf("\n %g", arr[i]);
		num = arr[i];
		drob = arr[i] - num;
		drob = drob * 10;
		printf(" %g",drob);	
	}
}

void task5c(){
	float arr[50];
	int N, i, num;
	// float sum = 0, dob = 1;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %210)* 0.1;
		printf("%.0f \n", arr[i]);
		// num = arr[i];
		// printf("%d ",num);	
	}
}
