#include <stdio.h>
#include <string.h>

main(){
	FILE *fp;
	int numbers[50];
	char number[10];
	int i=0, kil=0, n;
	int plus=0, minus=0;
	
	fp = fopen("numbers.dat", "r");
	while(1){
		n = fscanf(fp, "%i", &number[i]);
		if( n == -1){
			break;
		}
		n=0;
		i++;
	}
	fclose(fp);
	printf("%i numbers were read",i);
	kil=i;
	for(i=0; i<kil; i++){
		if(numbers[i] > 0){
			plus++;
		}else if(numbers[i] <0){
			minus++;
		}
	}
	fp = fopen("numbersCopy.dat","w");
	for(i=0; i<kil; i++)
	fprintf(fp, "%i " ,numbers[i]);
	fprintf(fp,"\ndodatnih: %i;\nvidemnih: %i;",plus, minus);
	fclose(fp);
	printf("\n\nComplete");
}
