#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 clrscr();
 int b,h,c;

 printf("enter of base : ",b);
 scanf("%d",&b);
 printf("enter of hight : ",h);
 scanf("%d",&h);
 c = b*b*h;
 printf("area of triangle :%d ",c);
 getch();
}