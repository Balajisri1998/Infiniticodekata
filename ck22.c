#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,t,t1=0;
  scanf("%d",&n);
  t=n;
  if(t>10000)
  {
  printf("Invalid");
  exit(1);
  }
  while(t>0)
  {
   t1=t1*10;
   t1=t1+(t%10);
   t=t/10;
  }
  if(n==t1)
  printf("yes");
  else
  printf("no");
}
