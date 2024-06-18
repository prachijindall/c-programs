#include<stdio.h>
int main()
{
FILE *f;
f=fopen("aaa.txt","r");
if(f==NULL)
{
printf("cannot open");	
	}
	else printf("found");
fclose(f);
return 0;		
}
