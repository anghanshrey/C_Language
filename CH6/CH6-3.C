#include<stdio.h>
#include<conio.h>
main()
{
  int i,n,sum =0;
  clrscr();
  printf("enter number n:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
   {

      sum=sum+i;

   }
     printf("\nthe sum of all number :%d",sum);
  getch();
}