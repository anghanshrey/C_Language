#include<stdio.h>
#include<conio.h>
main()
  {
   int n;
   float x,a,b,c;
   clrscr();
   printf("\n\tENTER UNITS:");
   scanf("%d",&n);
   if(n>=1 && n<=50)
    {
	 x=n*0.5;
	 printf("\n\n\tELECTRLCLTY BILL: %f",(x*0.2)+x);
    }
    else if(n>=51 && n<=150)
     {
	a=((n-50)*0.75)+25;
	printf("\n\n\tELECTRLCLTY BILL: %f",(a*0.2)+a);
     }
     else if(n>=150 && n<=250)
     {
	b=((n-50)*1.2)+100;
	printf("\n\n\tELECTRLCLTY BILL: %f",(b*0.2)+b);
     }
     else if(n>250)
     {
	c=((n-250)*1.5)+220;
	printf("\n\n\tELECTRLCLTY BILL: %f",(c*0.2)+c);
     }
     else
     {
	   printf("\n\n\tINVALID INPUT!!");
     }
    getch();
  }