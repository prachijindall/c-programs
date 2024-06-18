#include<stdio.h>
int main()
{
int max,i,a[30];
for(i=0;i<=7;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
	}	
printf("\n");
max=a[0];
for(i=1;i<=7;i++)
{
if(max<a[i])
{
max=a[i];	
	}	
	}
	printf("%d\n",max);
	return 0;	
}
