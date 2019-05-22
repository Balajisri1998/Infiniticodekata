#include<stdio.h>
#include<stdlib.h>
void main()
{
 int m,r,q;
 scanf("%d",&m);
 if(m<0)
 {
 printf("Invalid");
 exit(1);
 }
 r=m/60;
 q=m%60;
 printf("%d %d",r,q);
}
