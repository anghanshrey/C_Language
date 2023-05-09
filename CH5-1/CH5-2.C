#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%d",&c);
 (a<b)
	     ? (a<c)
		    ? printf("a is minimun")
		    : printf("c is minimun")
	     :(b<c)
		  ?printf("b is minimun")
		  :printf("c is minimun");
 getch();
}

