#include<stdio.h>
int main()
{
int a[30],i,sum=0;
float avg;
for(i=0;i<6;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
	}	
for(i=0;i<6;i++)
{
sum=sum+a[i];	
}	
printf("sum is \n %d\n",sum);
avg=sum/6;
printf("%f\n",avg);
return 0;
}
