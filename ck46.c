#include<stdio.h>
#include<stdlib.h>
void main()
{
char s[10000];
int i=0,c=0;
gets(s);
while(s[i]!='\0')
{
if((s[i]>=33&&s[i]<=47)||(s[i]>=58&&s[i]<=64)||(s[i]>=91&&s[i]<96)||(s[i]>=123&&s[i]<=126))
c++;
i++;
}
printf("%d",c);
}
