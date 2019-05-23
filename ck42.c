#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 char s[1000];
 int i=0,c=0;
 gets(s);
   if(s[0]!=' ')
   c++;
 while(s[i]!='\0')
 {
   if(s[i]==' ')
   {
   i++;
   }

   if(s[i]>=33&&s[i]<=126)
   {
   if(s[i-1]==' ')
   c++;
   }
   i++;
 }
 printf("%d",c);
}
