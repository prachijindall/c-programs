#include<stdio.h>
int main()
{
int a[30],i,n,t,j;
printf("enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
	}	
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;	
	}	
	}	
	}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);	
		}
		return 0;		
}
