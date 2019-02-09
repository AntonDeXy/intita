#include <conio.h>
#include <stdio.h>

main(){
	int a,b;
	printf("Year: ");
	scanf("%d",&a);
	
	b=a%10;

	switch(b){
		case 1 : printf("%d pik",a);break;
		case 2 : printf("%d poku",a);break;
		case 3 : printf("%d poku",a);break;
		case 4 : printf("%d poku",a);break;
		case 5 : printf("%d pokiv",a);break;
		case 6 : printf("%d pokiv",a);break;
		case 7 : printf("%d pokiv",a);break;
		case 8 : printf("%d pokiv",a);break;
		case 9 : printf("%d pokiv",a);break;
		case 0 : printf("%d pokiv",a);break;
	};
}
