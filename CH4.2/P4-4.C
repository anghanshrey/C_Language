#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 float g;

 clrscr();
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%d",&c);
 g = (a*b*c)/100;
 printf("simple interest :%.2f",g);
 getch();
}