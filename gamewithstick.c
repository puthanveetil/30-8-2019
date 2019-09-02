#include<stdio.h>
int main()
{
int n,m,x;
scanf("%d%d", &n,&m);
x=(n<=m)?n:m;
if(x%2==0)
{
printf("Malvika");
}
else
{
printf("Akshat");
}
return 0;
}