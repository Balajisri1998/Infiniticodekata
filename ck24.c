#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,q,i;
 scanf("%d %d",&n,&q);
 if(n>=q)
 {
 printf("Invalid");
 exit(1);
 }
 for(i=n+1;i<q;i++)
 {
  if(i%2!=0)
  {
  printf("%d",i);
  }
  if(i!=(q-1))
  printf(" ");
 }
}
