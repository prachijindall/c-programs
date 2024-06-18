#include<stdio.h>
int main()
{
int i,a[30],b,p;
for(i=1;i<=5;i++)
{
printf("enter value");
scanf("%d",&a[i]);	
	}
printf("\n");
printf("enter value to insert and position");
scanf("%d %d",&b,&p);
for(i=5;i>=p;i--)
{
a[i+1]=a[i];	
		}
	a[p]=b;	
	for(i=1;i<=6;i++)
	{
	printf("%d\t",a[i]);	
				}
				return 0;			
}
