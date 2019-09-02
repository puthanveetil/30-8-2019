#include<stdio.h>
main()
{
int a,n=5;
scanf("%d",&a);
int s=a/n;
if(a%n!=0)
s=s+1;
printf("%d",s);
}