#include <stdio.h>
#include <time.h>
void task1();
void task2();
void task3();

main(){
	// task1();
	// task2();
	task3();
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

