#include <conio.h>
#include <stdio.h>

main(){
	int y,m,d;
	
	printf("Year: ");
	scanf("%d",&y);
	
	printf("Month: ");
	scanf("%d",&m);
	
	printf("Day: ");
	scanf("%d",&d);
	
	//month
//	if(m<12){
//		m++;
//	}else if(m==12){
//		m=1;
//	}
	if(d>=28&&m==2){
		printf("False");
		return;
	}else if(d>=31&&m==4||6||9||11){
		printf("False");
		return;
	}else if(d>=32&&m==1||3||5||7||8||10||12){
		printf("False");
		return;
	}
	
	//day
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		switch(d){
			case 31:d=1;break;
			default: d++;
		}
	}else if(m==2){
		switch(d){
			case 28:d=1;break;
			default: d++;
		}
	}else if (m==4||m==6||m==9||m==11){
		switch(d){
			case 30:d=1;break;
			default: d++;
		}
	}
	
	//year
	if(m==13){
		m=1;
		d=1;
		y++;
	}
	
	printf("nastypna data: %d Year, %d Month, %d Day",y,m,d);
}
