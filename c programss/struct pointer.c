#include<stdio.h>
int main()
{
struct student
{
char name[30];
int age,roll;	
	};
struct student s1,*p;
p=&s1;
printf("enter data");
scanf("%s %d %d",&s1.name,&s1.age,&s1.roll);
printf("\n data is \n");
printf("%s\n %d\n %d\n",p->name,p->age,p->roll);
return 0;		
}
