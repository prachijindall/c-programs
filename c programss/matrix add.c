#include<stdio.h>
int main()
{
int a[30][30],b[40][40],c[70][70];
int i,j;
printf("1st array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter values");
scanf("%d",&a[i][j]);	
}
}	
printf("2nd array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter values");
scanf("%d",&b[i][j]);	
	}	
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];	
	}	
}
printf("1st array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);	
	}
printf("\n");		
}
printf("2nd array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);	
	}
printf("\n");		
}
printf("added array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);	
	}
printf("\n");		
}
return 0;
}
