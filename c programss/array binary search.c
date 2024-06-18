#include<stdio.h>
int bsearch(int a[30],int b,int e,int s);
int main()
{
	int a[30],s,b,e;
	int n,i,f,m;
printf("enter size of arrays");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter values");
scanf("%d",&a[i]);	
	}
printf("enter element to search");
scanf("%d",&s);
int result=bsearch(a,0,n-1,s);
if(result==e)
{
printf("not found");	
}
else
{
printf("found");
printf("%d\n %d\n",result,a[result]);	
}
return 0;
}
int bsearch(int a[30],int b,int e,int s)
{
	int f;
while(b<=e)
{
int m=(b+e)/2;
if(a[m]==s)
{
return m;	
	}
 if(a[m]<s)
{
b=m+1;	
		}
else
{
e=m-1;	
}				
}
return f;
}
