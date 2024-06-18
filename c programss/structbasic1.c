#include<stdio.h>
int main()
{
struct student
{
char name[30];
int roll_no;
char clas[40];	
	};
struct student s1;
printf("enter details");
printf("\n enter name,roll no,class\n");
scanf("%s %d %s",&s1.name,&s1.roll_no,&s1.clas);
printf("\n");
printf("name is%s\n roll no is%d\n class is %s\n",s1.name,s1.roll_no,s1.clas);	
return 0;	
}
