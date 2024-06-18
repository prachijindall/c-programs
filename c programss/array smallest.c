#include<stdio.h>
int main()
{
int a[30],i;
int min;
for(i=0;i<=7;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
}
printf("\n");
min=a[0];
for(i=1;i<=7;i++)
{
if(min>a[i])
{
min=a[i];	
}		
}
printf("%d\n",min);
return 0;	
}
