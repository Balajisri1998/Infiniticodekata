#include<stdio.h>
#include<stdlib.h>
void main()
{
int h1,h2,m1,m2,res,h,m;
scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
if(h1<0&&h2<0&&m1<0&&m2<0)
{
 printf("Invalid");
 exit(1);
}
h=h1-h2;
m=m1-m2;
h=abs(h);
m=abs(m);
printf("%d %d",h,m);
}
