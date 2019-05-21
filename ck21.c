#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,k,i,pow=1;
 scanf("%d %d",&n,&k);
 if(k<0)
 {
 printf("Invalid");
 exit(1);
 }
  for(i=0;i<k;i++)
 {
  pow*=n;
 }
 printf("%d",pow);
}
