#include<stdio.h>
#include<stdlib.h>
void main()
{
 unsigned long n,i,f=1,k=1;
 scanf("%lu",&n);
 if(n<0)
 {
 printf("Invalid");
 exit(1);
 }
 if(n==0)
 {
 printf("%d",k);
  exit(1);
 }
 for(i=1;i<=n;i++)
 {
  f=f*i;
 }
 printf("%lu",f);
}
