#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();
 printf("enter any number :");
 scanf("%d",&n);
 if(n >= 0)
  {
	printf("this number is positive ");
  }
 else if (n == 0)
  {
	 printf("this number is neutral ");
  }
 else
  {
	 printf("this number is negative ");
  }
 getch();
}