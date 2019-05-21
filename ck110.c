#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
    char a[100];
    int len,i=0,j=0,count;
    scanf("%s", a);
    len=strlen (a);
    count=len;
    if(a[0]=='-')
    {
     count-=1;
     i++;
    }
    for(j=i;j<len;j++)
    {
	  if(!isdigit(a[i]))
	  {
	    printf ("Invalid");
	    exit(1);
	  }
    }
    printf("%d",count);
    }
