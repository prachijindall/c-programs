#include<stdio.h>
int main()
{
int i,*p;
p=&i;
printf("enter value of i");
scanf("%d",&i);
printf("%d\n",i);
printf("%d\n",*&i);
printf("%d\n",*p);
printf("%d\n",&i);
printf("%d\n",&p);
printf("%d\n",p);
printf("%d\n",*&p);
return 0;
	
}
