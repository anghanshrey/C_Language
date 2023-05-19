#include<stdio.h>
#include<conio.h>
main()
{
 int n,sum=0,first,second;
 clrscr();
 printf("enter a number:");
 scanf("%d",&n);
 second=n%10;
 while(n>=10)
 {
       n=n/10;
 }
first=n;
sum=first+second;
printf("sum: %d",sum);

 getch();
}