#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s[100];
int n,i;
gets(s);
scanf("%d",&n);
if(n<=0)
{
printf("Invalid");
exit(1);
}
while(n>0)
{
puts(s);
n--;
}
}
