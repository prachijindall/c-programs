#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,*ptr,n,sum=0;
printf("enter no. of elements");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("cannot allocate memory");
return 0;	
}	
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
sum+=*(ptr+i);	
	}
printf("sum=%d",sum);
free(ptr);
return 0;		
}
