#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 char s[1000];
 int i=0,c=0;
 gets(s);
 while(s[i]!='\0')
 {
  if(s[i]==' ')
  c++;
  i++;
 }
 printf("%d",c);
}
