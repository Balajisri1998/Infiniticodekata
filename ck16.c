#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
    char a[100];
    int len,i=0,b,j=0,count;
    gets(a);
    len=strlen(a);
    for(j=0;j<len;j++)
     {
	    if(!isdigit(a[i]))
	    {
	    printf ("Invalid");
	    exit(1);
	    }
     }
     b=atoi(a);
     if(((b%4==0)&&(b%100!=0))||(b%400)==0)
     printf("yes");
     else
     printf("no");
}
