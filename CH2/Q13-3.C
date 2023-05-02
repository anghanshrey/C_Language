#include<stdio.h>
#include<conio.h>
#define a  b
#define b  a
#define C clrscr
#define G getch
main()
{
 int a,b;
 C();
 printf("enter a:");
 scanf("%i",&b);
 printf("enter b:");
 scanf("%i",&a);
 printf("a:%d\nb:%d",a,b);
 G();
}
