#include<stdio.h>
int main()
{
int i,n,x,y,z,x1=0,y1=0,z1=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d %d",&x,&y,&z);
x1=x1+x; 
y1=y1+y; 
z1=z1+z;
}
if(x1==0 && y1==0 && z1==0)
printf("YES");
else
printf("NO");
}