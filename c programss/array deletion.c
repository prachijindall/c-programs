#include<stdio.h>
int main()
{
int i,a[30],b,c;
for(i=1;i<=5;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
}
printf("\n");
printf("enter element to delete");
scanf("%d",&b);
for(i=1;i<=5;i++)
{
if(a[i]==b)
{
printf("position %d\n",i);
break;	
	}	
	}
c=i;	
	for(i=c;i<=4;i++)
	{
	a[i]=a[i+1];	
		}
		for(i=1;i<5;i++)
		{
printf("%d\n",a[i]);	
}
return 0;	
}
