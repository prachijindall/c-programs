#include<stdio.h>
int main()
{
int i,j,a[30][30],b[30][30],c[30][30];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("enter value");
scanf("%d",&a[i][j]);	
	}	
	}
	printf("2nd matrix");
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
		printf("enter value");
		scanf("%d",&b[i][j]);
		}	
		}
		printf("1st matrix is");
		for(i=0;i<=2;i++)
		{
		for(j=0;j<=2;j++)
		{
		printf("%d\t",a[i][j]);	
			}
		printf("\n");		
			}
printf("2nd matrix is");
		for(i=0;i<=2;i++)
		{
		for(j=0;j<=2;j++)
		{
		printf("%d\t",b[i][j]);	
			}
		printf("\n");		
			}
		for(i=0;i<=2;i++)
		{
		for(j=0;j<=2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];	
			}	
							}
							printf("3rd matrix is");
		for(i=0;i<=2;i++)
		{
		for(j=0;j<=2;j++)
		{
		printf("%d\t",c[i][j]);	
			}
		printf("\n");		
			}	
			return 0;				
}
