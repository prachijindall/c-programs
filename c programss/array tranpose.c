#include<stdio.h>
int main()
{
int i,j;
int a[30][30],b[30][30];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("enter value");
scanf("%d",&a[i][j]);	
}
	}
	printf("\n");
	printf("1st matrix");
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
	printf("%d\t",a[i][j]);	
		}
		printf("\n");	
		}
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
			b[j][i]=a[i][j];	
			}
			}
			printf("\n");
			printf("final matrix");
			printf("\n");
			for(i=0;i<=2;i++)
			{
			for(j=0;j<=2;j++)
			{
				printf("%d\t",b[i][j]);
				}
				printf("\n");	
				}
				return 0;	
}
