#include<stdio.h>
void main()
{
 int n,k,i,pow=1;
 scanf("%d %d",&n,&k);
 if(k<=0)
 printf("Invalid");
 for(i=0;i<k;i++)
 {
  pow*=n;
 }
 printf("%d",pow);
}
