#include<stdio.h>
#include<conio.h>

void task1();//scan
void task2();//math
int x,y;

main()
{
  task1();
  task2();
  // printf("%d and %d",x,y);

getch();
}

void task1(){
  printf("x=");
  scanf("%d",&x);
  printf("y=");
  scanf("%d",&y);
}
void task2(){
  if(x>0&&y>0){
    printf("1 chvert`");
  }
  if(x<0&&y>0){
    printf("2 chvert`");
  }
  if(x<0&&y<0){
    printf("3 chvert`");
  }
  if(x>0&&y<0){
    printf("4 chvert`");
  }
}
