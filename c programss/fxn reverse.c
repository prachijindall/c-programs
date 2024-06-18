#include<stdio.h>
int rev(int a);
int main()
{
int a;
printf("enter a");
scanf("%d",&a);
int result=rev(a);	
printf("\n reverse is %d\n",result);
return 0;
}
int rev(int a)
{
int rem,rev=0;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;	
	}
return rev;		
}
