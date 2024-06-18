#include<stdio.h>
int main()
{
int i,*j;
j=&i;
printf("enter value");
scanf("%d",&i);
printf("%d\n",i);
printf("%d\n",*j);
*j=20;
printf("%d\n",i);
printf("%d\n",*j);
return 0;	
}
