#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,i,k=0;
 scanf("%d",&n);
 if(n<0)
 {
 printf("Invalid");
 exit(1);
 }
 if(n==0)
 {
 printf("0 0 0 0 0");
 exit(1);
 }
  for(i=n;i==i;i++)
  {
  if(i%n==0)
  {
  k=k+1;
  if(k>1)
  printf(" %d",i);
  else
  printf("%d",i);
  }
  if(k==5)
  {
  exit(1);
  }
  }
}
