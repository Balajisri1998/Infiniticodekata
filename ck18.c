#include<stdio.h>
void main()
{
int n,i,sum=0;
scanf("%d",&n);
if(n>0)
{
 for(i=0;i<=n;i++)
 {
 sum+=i;
 }
 printf("%d",sum);
}
}
