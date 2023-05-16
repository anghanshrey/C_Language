#include<stdio.h>
#include<conio.h>
main()
{
 int i=1,n;
 clrscr();
 printf("\nenter any number :");
 scanf("%d",&n);
  while(i<=n)
   {
       if(i%2==1)
       printf("\n%d",i);
     i++;
   }
  getch();
}