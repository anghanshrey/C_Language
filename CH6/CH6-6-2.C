#include<stdio.h>
#include<conio.h>
main()
{
 int n,a=0,b=1,c;
 clrscr();
 printf("enter the number: ");
 scanf("%d",&n);
 printf("finonagi number : \n");
 while (n>0)
  {
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
    n--;
  }

  getch();
}