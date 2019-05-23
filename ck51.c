#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s[100];
int n,i=0;
scanf("%s",&s);
scanf("%d",&n);
if(n<=0)
{
printf("Invalid");
exit(1);
}
while(n>0)
{
if(i==0)
{
printf("%s",s);
i++;
}
else
printf("\n%s",s);
n--;
}
}
