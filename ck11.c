#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
void main()
{
char a[100];
int len,i=0,j=0,b; 
scanf("%s", a);
len= strlen (a);
	if(a[i]=='-')
	{
	  i++;
	}
  for (j=i;j<len;j++)
  {
        
     if (!isdigit(a[i]))
     {
       printf ("Invalid");
	     exit(1);
     }
  }
b=atoi(a);
    if(b<0)
	   printf("Negative");
    if(b>0)
	   printf("Positive");
    if(b==0)
	   printf("Zero");
}
