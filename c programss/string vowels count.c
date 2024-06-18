#include<stdio.h>
int main()
{
char a[30];
int l=0,count=0;
printf("enter string");
gets(a);
while(a[l]!='\0')
{
if(a[l]=='a'||a[l]=='A'||a[l]=='E'||a[l]=='I'||a[l]=='O'||a[l]=='U'||a[l]=='e'||a[l]=='i'||a[l]=='o'||a[l]=='u')
count++;
l++;	
	}
	printf("%d\n",count);
	return 0;	
}
