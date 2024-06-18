#include<stdio.h>
int main()
{
char a[30],b[30];
int i,j;
printf("enter string");
scanf("%s %s",&a,&b);
for(i=0;i<a[i]!='\0';i++);
for(j=0;j<b[j]!='\0';j++)	
{
a[i]=b[j];
i++;	
}
a[i]='\0';
printf("%s\n",a);
return 0;
}
