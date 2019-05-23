#include<stdio.h>
#include<stdlib.h>
void main()
{
int t=0,n,i=0,f=1,f1=0;
scanf("%d",&n);
 if(n<=0)
 {
 printf("Invalid");
  exit(1);
 }
printf("%d",f);
for(i=1;i<n;i++)
{
 f1=f1+f;
 printf(" %d",f1);
 t=f1;
 f1=f;
 f=t;
}
}
