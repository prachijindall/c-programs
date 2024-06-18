#include<stdio.h>
int main()
{
   int a[40],i,n,e,p;
   printf("enter size of array");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf("enter values");
    scanf("%d",&a[i]);
   } 
   printf("array\n");
   for(i=1;i<=n;i++)
   {
    printf("%d\n",a[i]);
   }
   printf("element to delete");
   scanf("%d",&e);
   for(i=1;i<=n;i++)
   {
    if(e==a[i])
    {
    p=i;
    break;   
    }
   }
   for(i=p;i<=n;i++)
   {
   a[i]=a[i+1]; 
   }
   printf("new array is\n");
   for(i=1;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   return 0;

}