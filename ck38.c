#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,a[100],i,j;
 scanf("%d",&n);
 if(n<=0)
 {
 printf("Invalid");
 exit(1);
 }
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
 printf("%d %d",a[i],i);
 if(i!=(n-1))
 printf("\n");
 }
}
