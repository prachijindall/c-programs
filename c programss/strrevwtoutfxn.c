#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
int left,right,length,i,temp;
printf("enter string");
scanf("%s",&a);
length=strlen(a);
left=0;
right=length-1;
for(i=left;i<right;i++)
{
temp=a[i];
a[i]=a[right];
a[right]=temp;
right--;	
}
printf("%s\n",a);
return 0;
}

