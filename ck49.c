#include<stdio.h>
#include<stdlib.h>
void main()
{
int n=10,t,a[10],i,j;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i]<a[j])
 {
  t=a[j];
  a[j]=a[i];
  a[i]=t;
 }
 }
}
printf("%d",a[n-1]);
}

