#include<stdio.h>
int main()
{
int a[30],i,j,b[40];
for(i=0;i<=5;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
	}
j=0;	
for(i=5;i>=0;i--)
{
b[j]=a[i];
j++;	
}
for(j=0;j<=5;j++)
{
printf("%d\n",b[j]);	
}
		return 0;		
}
