#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
 char a[100],i=0,c=0,k=0;
 gets(a);
 while(a[i]!='\0')
 {
   if(a[i]=='.')
   {
   c++;
   if(c>1)
   {
   printf("no");
   exit(1);
   }
   }
   if(c<1){
   if(!isdigit(a[i]))
   k++;
   }
   i++;
 }
 if(k==0)
 printf("yes");
 else
 printf("no");
}
