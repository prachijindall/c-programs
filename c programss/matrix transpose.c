#include<stdio.h>
int main()
{
int a[30][30],i,j;
printf("1st array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter value");
scanf("%d",&a[i][j]);	
}	
}
printf("\n 1st array is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);	
}	
printf("\n");
}
printf("\n transpose is\n");
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
printf("%d\t",a[i][j]);	
}	
printf("\n");
}	
return 0;
}
