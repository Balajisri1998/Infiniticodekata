#include<stdio.h>
#include<stdlib.h>
void main()
{
 int t=0,n,z,np=0,i,j;
 scanf("%d %d",&n,&z);
 if(n>z)
 {
 printf("Invalid");
 exit(1);
 }
 for(j=n+1;j<z;j++)
 {
 np=0;
   for(i=2;i<j;i++)
   {
     if(j%i==0)
     {
     np=1;
     break;
     }
   }
  if(np==0)
  {
   t++;
   if(t==1)
   printf("%d ",j);
   if(t==2)
   printf("%d",j);
   if(t>2)
   printf(" %d",j);
  }
 }
}
