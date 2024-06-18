#include<stdio.h>
int main()
{
char a[30],b[30];
int i;
printf("enter string");
scanf("%s",&a);
for(i=0;i<a[i]!='\0';i++)	
{
b[i]=a[i];	
}
b[i]='\0';
printf("%s\n",b);
return 0;
}
