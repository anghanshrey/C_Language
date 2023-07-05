#include<stdio.h>
void main()
{
	int x,y;

	printf("enter the value of x :");
	scanf("%d",&x);
	
	printf("enter the value of y :");
	scanf("%d",&y);
	
    int  *a ,*b;
    a=&x;
    b=&y;
    
    printf("before swapping :\n a :%d \n b :%d \n",*a ,*b);
    *a =x+y;
    *b =x-y;
    *a =x-y;
    printf("after swapping :\n a :%d \n b :%d \n",*a,*b);


}
