#include<stdio.h>
#include<conio.h>
main()
{
 float a=100,b,c,d,e;
 clrscr();
 b=a*0.10;
 c=a*0.5;
 d=a*0.8;
 printf("base salary : %.2f\n",a);
 printf("hra : %.2f\n",b);
 printf("da : %.2f\n",c);
 printf("ta :%.2f\n",d);
 e=a+b+c+d;
 printf("Rs. :%.2f",e);
 getch();
}