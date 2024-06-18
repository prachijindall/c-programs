#include<stdio.h>
int main()
{
struct student
{
char name[30];
int roll_no;
int sub1,sub2,sub3,sub4;
float percentage;	
	};
struct student l[30];
int n,i;
printf("enter no. of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name,roll_no,msub1,msub2,msub3,msub4");
scanf("%s %d %d %d %d %d",&l[i].name,&l[i].roll_no,&l[i].sub1,&l[i].sub2,&l[i].sub3,&l[i].sub4);		
l[i].percentage=(float)(l[i].sub1+l[i].sub2+l[i].sub3+l[i].sub4)*100/400;
printf("percentage is %f\n",l[i].percentage);
}
return 0;
}

