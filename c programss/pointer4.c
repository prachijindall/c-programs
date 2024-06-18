#include<stdio.h>
int main()
{
int a[4],*j,i;
j=a;
for(i=0;i<4;i++)
{
printf("enter values");
scanf("%d",&a[i]);
printf("%d\n",j);
printf("%d\n",*j);
j++;	
}
return 0;	
}
