#include<stdio.h>
#include<stdlib.h>
void main()
{
unsigned long n,z=0,t,a[10000],i,j;
scanf("%lu",&n);
if(n<1||n>1000)
{
printf("Invalid");
exit(1);
}
for(i=0;i<n;i++)
scanf("%lu",&a[i]);
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
for(i=0;i<n;i++)
{
if(z>=1)
{
printf(" %lu",a[i]);
}
else
{
printf("%lu",a[i]);
z=z+1;
}
}
}
