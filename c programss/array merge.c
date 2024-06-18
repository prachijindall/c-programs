#include<stdio.h>
int main()
{
int a[30],i,n1,n2,b[40],c[70],n3,k;
printf("enter size of a1,a2");
scanf("%d %d",&n1,&n2);	
n3=n1+n2;
for(i=0;i<n1;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
}
printf("2nd array\n");
for(i=0;i<n2;i++)
{
printf("enter values");
scanf("%d",&b[i]);	
}
for(i=0;i<n1;i++)
{
c[i]=a[i];	
}
for(i=0;i<n2;i++)
{
c[i+n1]=b[i];	
}
for(i=0;i<n3;i++)
{
printf("%d\n",c[i]);	
}
return 0;
}
