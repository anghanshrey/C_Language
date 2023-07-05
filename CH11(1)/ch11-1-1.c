#include<stdio.h>
void main()
{
	int n;
	
	printf("enter the array's size :");
	scanf("%d",&n);
	
	int a[n],i;
	int *ptr;
	
	ptr =&a;
	
	printf("enter  array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",ptr + i);
	}
	
	printf("enter  array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("%d,",*(ptr+i)**(ptr+i));
	}



}
