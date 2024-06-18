#include<stdio.h>
int main()
{
FILE *f;
f=fopen("aaa.txt","a");
fputc('&',f);
fclose(f);
return 0;	
}
