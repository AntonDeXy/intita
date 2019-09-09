#include <stdio.h>
// #include <conio.h>

typedef struct{
	char name[50];
	long serial;
	float price;
	int count;
} tovar;

main(){
  tovar laptops[50]; 
  FILE* fp;
  char tmp[2];
  fp = fopen("laptops.db", "r");
  int i, count;
  i=0;
  while (1)
  {
    laptops[i].name[0]=0;
    fgets(laptops[i].name,49,fp);
    if(laptops[i].name[0]==0) break;
    fscanf(fp, "%i", &laptops[i].serial);
    fscanf(fp, "%f", &laptops[i].price);
    fscanf(fp, "%i", &laptops[i].count);
     fgets(tmp,1,fp);
    fgets(tmp,1,fp);
    i++;
  }
  printf("Read %i accounts",i);
  count=i;
  for(i=0; i<count;i++){
    printf("%s", laptops[i].name);
    printf("%i\n", laptops[i].serial);
    printf("%g\n", laptops[i].price);
    printf("%i\n\n\n-", laptops[i].count);
  }
}
// getch();
