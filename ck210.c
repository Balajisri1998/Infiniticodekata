#include<stdio.h>
void main()
{
 int n,i=0;
 scanf("%d",&n);
 while(n>0)
 {
  i=i+5;
  if(n==1)
  printf("%d",i);
  else
  printf("%d ",i);
  n--;
 }
}
