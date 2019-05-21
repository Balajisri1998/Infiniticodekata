#include<stdio.h>
void main()
{
int i=0,j,a[3],lar;
for(i=0;i<3;i++)
{
 scanf("%d",&a[i]);
}
lar=a[0];
for(i=0;i<3;i++)
{
 if(a[0]<a[i])
 lar=a[i];
}
printf("%d",lar);
}
