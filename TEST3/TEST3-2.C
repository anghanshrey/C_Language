#include<stdio.h>
#include<conio.h>
main()
{
 int n,count =0;
 clrscr();
 printf("enter a no. :");
 scanf("%d",&n);
 while(n!=0)
  {
       n=n/10;
       count++;
  }
 if(count!=0)
  {
   printf("no. of digits : %d",count);
  }
     getch();
}