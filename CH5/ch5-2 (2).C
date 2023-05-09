#include<stdio.h>
#include<conio.h>
main()
 {
    int a,b,c,d;
    clrscr();
    printf("enter  a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    printf("enter d:");
    scanf("%d",&d);

    (a>b)
	 ?(a>c)
	       ?(a>d)
		     ?printf("a is maximun")
		     :printf("d is maximun")
	       :(c>d)
		     ?printf("c is maximun")
		     :printf("d is maximun")
	:(b>c)
	      ?(b>d)
		    ?printf("b is maximun")
		    :printf("d is maximun")
	      :(c>d)
		    ?printf("c is maximun")
		    :printf("d is maximun");

   getch();
 }