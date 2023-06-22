#include<stdio.h>
#include<conio.h>

void main(){
int a=8;
int b=3;
clrscr();
printf("enter the value of first number: ");
scanf("%d",a);
printf("enter thr value of second number: ");
scanf("%d" ,b);
if(a<b){
  printf("a is mini....\n");
}else{
    printf("b is mini...\n");
}
getch();
}