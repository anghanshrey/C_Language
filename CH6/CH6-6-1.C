#include<stdio.h>
#include<conio.h>
main()
{
 int n,reverse=0,rem;
 clrscr();
 printf("enter n:");
 scanf("%d",&n);
 while(n!=0)
  {

   rem=n%10;
   reverse=reverse*10+rem;
   n=n/10;

  }
 printf("palindrome number :%d",reverse);
 getch();


}