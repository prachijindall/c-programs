#include<stdio.h>
int main()
{
struct student
{
char name[30];
int roll_no;
int age;	
	};
struct student s1,s2;
printf("enter data");
printf("\n enter name,roll no,age\n");
scanf("%s %d %d",&s1.name,&s1.roll_no,&s1.age);
s2=s1;
printf("\n name %s\n roll no %d\n age %d\n",s2.name,s2.roll_no,s2.age);
return 0;		
}
