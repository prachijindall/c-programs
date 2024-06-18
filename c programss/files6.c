#include<stdio.h>
int main()
{
FILE *f,*s;
char ch;
f=fopen("aaa.txt","r");
if(f==NULL)
{
printf("cannot open");	
	}
	s=fopen("bbb.txt","w");
if(s==NULL)
{
printf("cannot open");	
		}
while(1)
{
ch=fgetc(f);
if(ch==EOF)
{
break;	
	}
else
{
fputc(ch,s);	
		}		
				}
fclose(f);
fclose(s);
return 0;								
}
