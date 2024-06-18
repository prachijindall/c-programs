#include<stdio.h>
int main()
{
struct student
{
char name[40];
int roll_no,sub1,sub2,sub3,sub4;
float percentage;	
	};
struct student s1;
printf("enter data");
printf("\n enter name,roll no,msub1,msub2,msub3,msub4");
scanf("%s %d %d %d %d %d",&s1.name,&s1.roll_no,&s1.sub1,&s1.sub2,&s1.sub3,&s1.sub4);
printf("\n data is\n");
printf("%s\n %d\n %d\n %d\n %d\n %d\n",s1.name,s1.roll_no,s1.sub1,s1.sub2,s1.sub3,s1.sub4);
s1.percentage=(float)(s1.sub1+s1.sub2+s1.sub3+s1.sub4)*100/400;
printf("\n perecentage is %f\n",s1.percentage);
if(s1.percentage>=80)
{
printf("A");	
}
else if(s1.percentage>=60&&s1.percentage<80)
{
printf("B");	
}
else if(s1.percentage>=50&&s1.percentage<60)
{
printf("C");	
}
else if(s1.percentage<50)
{
printf("D");	
}
return 0;		
}
