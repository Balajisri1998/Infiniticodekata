#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[100],i,n,k,sum=0;
scanf("%d %d",&n,&k);
  if(k>n)
  {
  printf("Invalid");
   exit(1);
  }
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
 sum+=a[i];
}
printf("%d",sum);
}
