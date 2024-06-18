#include<stdio.h>
int main()
{
FILE *f;
char name;
f=fopen("aaa.txt","r");
while(1)
{
name=fgetc(f);
if(name==EOF)
break;
printf("%c",name);
}
fclose(f);
return 0;	
}
