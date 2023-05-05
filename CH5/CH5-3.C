#include<stdio.h>
#include<conio.h>
main()
{
 int m;
 clrscr();
 printf("enter number :");
 scanf("%d",&m);
  if(m>=90 && m<=100)
  {
       printf(" grade A ");
  }
 else if (m>=80 && m<=89)
  {
       printf(" grade B");
  }
 else if (m>=70 && m<=79)
  {
       printf(" grade C");
  }
 else if (m>=60 && m<=69)
  {
       printf(" grade D");
  }
 else if (m>=35 && m<=59)
  {
       printf("grade F");
  }
 else if (m<=35 && m>=0)
  {
	printf("fail");
  }
 else if (m>=100)
  {
	printf("invalid marks.");
  }
 else if (m<=0)
  {
       printf("invalid marks.");
  }
 getch();
}