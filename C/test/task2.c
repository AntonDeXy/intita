#include <stdio.h>

main(){
  int year;

  printf("Enter year: ");
  scanf("%d",&year);

  if (year%4 == 0) {
    if (year%100 == 0 && year%400 != 0 ) {
      printf("ne vysocosnii");
      return;
    }
    printf("Vysocosnii");
    return;
  }

    printf("ne vysocosnii");
    return;
  
}


