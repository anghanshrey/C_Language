#include<stdio.h>
main()
{
	int n;
	
	printf("enter the array's size :");
	scanf("%d",&n);
	
	int a[n],i;
	printf("enter array's elements :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("negative elements form an array's :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf(" ");
		}
	}
	
}
