#include <stdio.h>

void task7();

main()
{
	task7();
}


void task7()
{
	int D,M,Y;
	
	printf("day=");
	scanf("%i",&D);
	printf("month=");
	scanf("%i",&M);
	printf("year=");
	scanf("%i",&Y);
	
	switch(D){
		case 1 ... 27: D++;break;
		case 28: switch(M){
					case 2: D=1;M++;break;
					case 1:
					case 3 ... 12: D++;break;
					default: printf("mistaken date!");
					         return;
					}break;
		case 29: switch(M){
					case 2: printf("mistaken date!");
					        return;
					default: D++;
				 }break;
		case 30: switch(M){
					case 1:
					case 3:
					case 5:
					case 7 ... 8:
					case 10: 
					case 12: D++;break;
					case 4:
					case 6:
					case 9:
					case 11: D=1; M++; break;
					default: printf("mistaken date!");
					        return;
					}break;
		case 31: switch(M){
					case 1:
					case 3:
					case 5:
					case 7 ... 8:
					case 10: D=1;M++; break;
					case 12: D=M=1;Y++;break;
					default: printf("mistaken date!");
					        return;
					}break;
		default: printf("mistaken date!");
		        return;
	}
	printf("Next day: %i.%i.%i",D,M,Y);
}
