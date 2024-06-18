#include<stdio.h>
int main()
{
FILE *f;
f=fopen("aaa.txt","a");
putw(5878,f);
printf("\n");
putw(67,f);
fclose(f);
return 0;	
}
