#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
int modulus(int a,int b);
int main()
{
int a,b;
printf("enter value of a,b");
scanf("%d %d",&a,&b);
int r1=add(a,b);
int r2=sub(a,b);
int r3=mult(a,b);
int r4=div(a,b);
int r5=modulus(a,b);
printf("\nadd %d \n",r1);
printf("\nsub %d \n",r2);
printf("\nmult %d \n",r3);
printf("\ndiv %d \n",r4);
printf("\n modulus %d\n",r5);
return 0;	
}
int add(int a,int b)
{
	int c;
c=a+b;
return c;	
}
int sub(int a,int b)
{int e;
e=a-b;
return e;	
}
int mult(int a,int b)
{int f;
f=a*b;
return f;	
}
int div(int a,int b)
{ 
int g;
g=a/b;
return g;
}
int modulus(int a,int b)
{int h;
h=a%b;
return h;	
}
