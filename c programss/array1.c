#include<stdio.h>
int main()
{
   int a[30],i,n,p,e;
   printf("enter size of array");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("enter values");
   scanf("%d",&a[i]); 
   } 
   for(i=1;i<=n;i++)
   {
    printf("%d\n",a[i]);
   }
   printf("enter element and position");
   scanf("%d %d",&e,&p);
   for(i=n;i>=p;i--)
   {
   a[i+1]=a[i]; 
   }
   a[p]=e;
   printf("new array\n");
   for(i=1;i<=n+1;i++)
   {
    printf("%d\n",a[i]);
   }
   return 0;
}