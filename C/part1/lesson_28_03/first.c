#include <stdio.h>
#include <time.h>
void task1();
void task2();
void task3();
void task4();
void task5a();
void task5b();
void task5c();
void task6a();
void task6b();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();
void task13();
void task14a();

main(){
	// task1();
	// task2();
	// task3();
	// task4();
	// task5a();
	// task5b();
//								task5c();
	//	task6a();
//	task6b();
//	task7();
//	task8();
//	task9();
//	task10();
//	task11();
//	task12();
//	task13();
	task14a();
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
		arr[i] = (rand() %21)* 0.1;
		printf("\n%g ", arr[i]);
	}
	for(i=0; i<N; i++){
		printf("\n %.0f", arr[i]);
	}
}

void task6a(){
	int arr[50];
	int N, i,k = 0, sum = 0, temp;
	srand(time(0));
	
	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21);
		printf("%d ", arr[i]);
	}
	printf("\n parni: ");
	for(i = 0; i<N; i++){
//		temp = arr[i];
		if(arr[i]%2 == 0){
			printf("%d ", arr[i]);
			k++;
		}
	}
	printf("\n kilkist parnyh: %d",k);
}

void task6b(){
	int arr[50];
	int N, i,k = 0, sum = 0, temp;
	srand(time(0));
	
	do{
		printf("Numbers: ");
		scanf("%i",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21);
		printf("%d ", arr[i]);
	}
	printf("\n neparni: ");
	for(i = 0; i<N; i++){
		if(arr[i]%2 != 0){
			printf("%d ", arr[i]);
			k++;
		}
	}
	printf("\n kilkist ne parnyh: %d",k);
}

void task7(){
	float arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%g ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]<0) k++;
	}
	printf("\nkilkist ne dodatnyh = %d",k);
}

void task8(){
	int arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%d ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]>0 && arr[i]%2==0) k++;
	}
	printf("\nparni dodatni = %d",k);
}


void task9(){
	int arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%d ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]<0 && arr[i]%2!=0) k++;
	}
	printf("\nparni dodatni = %d",k);
}

void task10(){
	int arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%d ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]>0 && arr[i]%2!=0){
			printf("y nabori e neparne dodatne chyslo");
			return;
		}
	}
	printf("y nabori ne mae neparnuh dodatnuh chysel");
}

void task11(){
	int arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
	}while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%d ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]<0 && arr[i]%2==0){
			printf("y nabori e parne videmne chyslo");
			return;
		}
	}
	printf("y nabori ne mae parnuh videmnux chysel");
}

void task12(){
	int arr[50];
	int N, i, k = 0;

	srand(time(0));

	do{
		printf("Numbers: ");
		scanf("%d",&N);
		printf("Max count: ");
		scanf("%d",&k);}
	while(N>50);
	printf("array numbers: ");
	for(i=0; i<N; i++){
		arr[i] = (rand() %21 - 10);
		printf("%d ",arr[i]);	
	}
	for(i=0; i<N; i++){
		if(arr[i]<k){
			printf("y nabori e chysla menshi %d", k);
			return;
		}
	}
	printf("y nabori ne mae chysla menshe %d", k);
}

void task13(){
	int input, sum=0, i;
	
	do{
		printf("Vvedit chyslo: ");
		scanf("%d", &input);
		sum=sum+input;
	}while(input != 0);
		printf("Syma vvedenyh chysel: %d",sum);
}

void task14a(){
	int input, sum=0, i=0,arr[100],k,n,numbers=0;
	
	printf("max count: ");
	scanf("%d",&k);
	
	do{
		printf("Vvedit chyslo: ");
		scanf("%d", &input);
		arr[i]=input;
		i++;
	}while(input != 0);
	
	for(n=0; n<i; n++){
		if(arr[n]<k){
			numbers++;
		}
	}
	printf("Chysel %d menshe %d",numbers ,k);
}
