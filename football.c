#include<stdio.h>
int main(){
char a[100];
scanf("%s",&a);
if(strstr(a,"1111111") || strstr(a,"0000000")) 
printf("YES");
else printf("NO");
return 0;
}