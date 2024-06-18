#include<stdio.h>
int main()
{
int a[30],i,e;
for(i=0;i<6;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
}
printf("enter element to search");
scanf("%d",&e);	
for(i=0;i<6;i++)
{
if(a[i]==e)
{
printf("found \n%d",i);	
}	
}
return 0;
}
