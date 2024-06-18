#include<stdio.h>
int main()
{
int a[6]={12,23,34,45,56};
int i,*p,*x;
p=&a[2],x=&a[4];
printf("%d\n",p);
printf("%d\n",x);
printf("%d\n",*p);
printf("%d\n",*x);
printf("%d\n",p-x);
printf("%d\n",*p-*x);
return 0;
}
