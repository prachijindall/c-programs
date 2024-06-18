#include<stdio.h>
int main()
{
    int a[30],max,min,i,n;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       printf("enter values");
       scanf("%d",&a[i]); 
    }
    printf("\n array is\n");
    for(i=0;i<=n;i++)
    {
       printf("%d\n",a[i]); 
    }
    max=a[0];
    for(i=1;i<=n;i++)
    {
        if(max<a[i])
        {
            max=a[i];

        }

    }
    printf("\n max is %d\n",max);
    min=a[0];
    for(i=1;i<=n;i++)
    {
       if(min>a[i])
       min=a[i]; 
    }
    printf("\n min is %d\n",min);
return 0;
}