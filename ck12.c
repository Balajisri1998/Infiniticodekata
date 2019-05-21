#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a>=0)
{
  if(a%2==0)
  printf("Even");
  else
  printf("Odd");
}
else
  printf("Invalid");
  getch();
}
