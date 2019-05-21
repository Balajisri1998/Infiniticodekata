#include<stdio.h>
void main()
{
int a[100],i,n,k,sum=0;
scanf("%d %d",&n,&k);
if(k>n)
{
printf("Invalid");
getch();
exit();
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
