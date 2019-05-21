#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,k,i,pow=1;
 scanf("%d %d",&n,&k);
  for(i=0;i<k;i++)
 {
  pow*=n;
 }
 printf("%d",pow);
}
