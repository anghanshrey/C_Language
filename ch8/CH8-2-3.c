#include<stdio.h>
main()
{
	int n;
	printf("enter arrey  size :");
	scanf("%d",&n);
	
	int a[n],i;
	
	printf("enter arrey  elements:\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("the squares are :");
	for(i=0;i<n;i++){
		printf("%d,",a[i]*a[i]);
	}
	
	
	
}
