#include <stdio.h>
#include <stdlib.h>
void main()
{
 int a,d,n,i,s=0;
 scanf("%d %d %d",&n,&a,&d);
 if(a<0||d<0||n<0)
 {
  printf("Invalid"); 
  exit(1); 
 }
 s=(n*(2*a+(n-1)*d))/2;
 printf("%d",s);
}
