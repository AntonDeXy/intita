#include <stdio.h>
#include <time.h>

void task1();
void task1d2();
void task1d3();
void task4();
void task5d1();
void task7();
void task8();
void task10();
void task11();

main(){
//	task1();
//	task1d2();
//	task1d3();
//	task4();
//	task7();
//	task8();
//	task10();
//	task11();
	task5d1();
}

void task1(){
	int n, k, res = 0, dob ;
	int i, j;
	
	printf("Enter N = ");
	scanf("%d",&n);
	printf("Enter K = ");
	scanf("%d",&k);
	
	for(i=1; i<=n; i++){
		printf("%i^%i", i, k);
		if(i<n){
			printf(" + ");
		}
		dob = 1;
		if(i!=1){	
			for(j=1; j<=k; j++){
				dob = dob * i;
			}
		}
		res = res + dob;
	}
	
	printf(" = %d",res);
}

void task1d2(){
	int n, k, res = 0, dob ;
	int i, j;
	
	printf("Enter N = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("%i^%i", i, i);
		if(i<n){
			printf(" + ");
		}
		dob = 1;
		if(i!=1){	
			for(j=1; j<=n; j++){
				dob = dob * i;
			}
		}
		res = res + dob;
	}
	
	printf(" = %d",res);
}

void task1d3(){
	int n, k, res = 0, dob ;
	int i, j;
	
	printf("Enter N = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("%i^%i", i,n+1-i);
		if(i<n){
			printf(" + ");
		}
		dob = 1;
		if(i!=1){	
			for(j=1; j<=n+1-i; j++){
				dob = dob * i;
			}
		}
		res = res + dob;
	}
	
	printf(" = %d",res);
}


void task4(){
	int a, b;
	int i, j;
	
	do{
		printf("Enter a = ");
		scanf("%d",&a);
		printf("Enter b = ");
		scanf("%d",&b);
	}while(a>=b);
		for(i=a; i<=b; i++){
			for(j=i;j>=1;j--){
				printf("%i",i);
			}
			printf("\n");
		}
}

void task7(){
	int i=0, n, num;
	
	printf("Enter n: ");
	scanf("%i", &num);
	do{
		n = num%10;
		num = num/10;
		if(n == 1){
			i++;
		}
	}while(num!=0);
	
	printf("%i",i);
}

void task8(){
	int sum=0, n, num;
	
	printf("Enter n: ");
	scanf("%i", &num);
	do{
		n = num%10;
		num = num/10;
		sum += n;
	}while(num!=0);
	
	printf("Suma chysel = %i",sum);
}


void task10(){
	int sum=1, n, num;
	
	printf("Enter n: ");
	scanf("%i", &num);
	do{
		n = num%10;
		num = num/10;
		if(n!=0){
			sum *= n;
		}
	}while(num!=0);
	
	printf("Dobytok chysel = %i",sum);
}

void task11(){
	int sum=0, n, num;
	
	printf("Enter n: ");
	scanf("%i", &num);
	do{
		n = num%10;
		num = num/10;
		sum += n;
		sum *=10;
	}while(num!=0);
	
		sum /=10;
	
	printf("Chylso = %i",sum);
}

void task5d1(){
	int matr[100][100];
	int k, n, i, j;
	int summa_all=0, s_plus=0, d_ne_zero = 1, summa_dodatnyh = 0, summa_videmhyh = 0, par_dod = 0, dobytok_videmnih = 1, videmnih = 0;
	
	srand(time(0));
	printf("Numbers of arrays = ");
	scanf("%i",&k);
	printf("Numbers of ellements = ");
	scanf("%i",&n);
	
	
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
			matr[i][j] = -20+rand()%41;
			printf("%3i ", matr[i][j]);
		 }
		 printf("\n");
	}
//	task A
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
			summa_all = summa_all+matr[i][j];
		}
	}
	printf("Summa = %i \n",summa_all);
	

//	task B
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
		 	if(matr[i][j]>0){
				s_plus++;
			 }
		}
	}
	printf("Count of dodatnih = %i \n",s_plus);

//	task C
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
		 	if(matr[i][j]!=0){
				d_ne_zero = d_ne_zero*matr[i][j];
			 }
		}
	}
	printf("Dobytok ne nyliv = %i \n",d_ne_zero);
	
//	task D
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
		 	if(matr[i][j]<0){
		 		summa_videmhyh = summa_videmhyh + matr[i][j];
			}else if(matr[i][j]>0){
				summa_dodatnyh = summa_dodatnyh + matr[i][j];
			}
		}
	}
	printf("Suma dodatnih = %i \n",summa_dodatnyh);
	printf("Summa viemnih = %i \n",summa_videmhyh);
	
	
//	task E
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
		 	if(matr[i][j]>0 && matr[i][j]%2 == 0){
		 		par_dod++;
			}
		}
	}
	printf("Parnih dodatnih num = %i \n",par_dod);
	

//	task F
	for(i=0; i<k; i++){
		 for(j=0; j<n; j++){
		 	if(matr[i][j]<0){
		 		videmnih++;
		 		dobytok_videmnih = dobytok_videmnih * matr[i][j];
			}
		}
	}
	if(dobytok_videmnih == 1){
		dobytok_videmnih = 0;
	}
	printf("Videmnih num = %i \n",videmnih);
	printf("Dobytok videmnih num = %i \n",dobytok_videmnih);
}
