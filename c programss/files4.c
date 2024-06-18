#include<stdio.h>
int main()
{
FILE *f;
f=fopen("aaa.txt","a");
fputs("world",f);
fclose(f);
return 0;	
}
