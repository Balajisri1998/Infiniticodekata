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
 for(j=0;j<3;j++)
 {
 if(a[i]<a[j])
 lar=a[j];
 }
} 
printf("%d",lar);
}
