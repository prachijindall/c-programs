#include<stdio.h>
int main()
{
int a, *x;
float b,*y;
char c,*z;
x=&a;
y=&b;
z=&c;
printf("enter a,b,c");
scanf("%d %f %c",&a,&b,&c);
printf("x %d\n y %d\n z %d\n",x,y,z);
printf("x %d\n y %f\n z %c\n",*x,*y,*z);
x++;
y++;
z++;
printf("x %d\n y %d\n z %d\n",x,y,z);

return 0;	
}
