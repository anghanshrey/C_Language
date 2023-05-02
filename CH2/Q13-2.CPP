#include<stdio.h>
#include<conio.h>
#define C clrscr
#define G getch
main()
{
 float  ammout;
 float  rate;
 float  time;
 float  P;
 C();
 printf("enter of ammout:  ");
 scanf("%f",&ammout);
 printf("enter of rate:  ");
 scanf("%f",&rate);
 printf("enter of time: ");
 scanf("%f",&time);
 P =(ammout*rate*time)/100;
 printf("progamm is simple interest : %f",P);
 G();
}