#include<stdio.h>
#include<conio.h>
main()
 {
   int a;
   clrscr();
   printf("enter any number :");
   scanf("%d",&a);
   (a%2==1)
	   ?printf("this is odd number ")
	   :printf("this is even number");
     getch();
 }