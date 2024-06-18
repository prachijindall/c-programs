#include<stdio.h>
int main()
{
int i,*p,**k;
p=&i;
k=&p;
printf("enter value of i");
scanf("%d",&i);
printf("%d\n",i);
printf("%d\n",*&i);
printf("%d\n",*p);
printf("%d\n",**k);
printf("%d\n",p);
printf("%d\n",*&p);
printf("%d\n",&p);
printf("%d\n",k);
printf("%d\n",&k);
printf("%d\n",*&k);
printf("%d\n",*k);
return 0;	
}
