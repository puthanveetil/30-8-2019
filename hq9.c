#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
scanf("%s",a);
int i=0,c=0;
for(i=0;i<strlen(a);i++)
{
if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
{
c++;
}
}
if(c>0)
printf("YES");
else
printf("NO");
return 0;
}