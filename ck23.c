#include<stdio.h>
void main()
{
 int t,n,np=0,i;
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  np=1;
 }
 if(np==1)
 printf("no");
 else
 printf("yes");
}
