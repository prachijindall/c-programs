#include<stdio.h>
int main()
{
struct student
{
char name[40];
int age,clas;	
	};
struct student s1={"hello",23,4};
printf("%s %d %d",s1.name,s1.age,s1.clas);
return 0;		
}
