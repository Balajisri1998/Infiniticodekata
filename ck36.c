#include<stdio.h>
#include<stdlib.h>
void main()
{
int long n,z=0,t,a[10000],i,j;
scanf("%ld",&n);
if(n<1||n>100000)
{
printf("Invalid");
exit(1);
}
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
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
printf(" %ld",a[i]);
}
else
{
printf("%ld",a[i]);
z=z+1;
}
}
}
