#include<stdio.h>
void main()
{
 int y,z;
 scanf("%d %d",&y,&z);
 y=y^z;
 z=y^z;
 y=y^z;
 printf("%d %d",y,z);
}
