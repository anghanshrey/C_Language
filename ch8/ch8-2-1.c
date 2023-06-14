#include<stdio.h>
main()
{
	int n,k;
	printf("enter arrey A's size :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	printf("enter arrey A's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter array B's size :");
	scanf("%d",&k);
	printf("enter arrey B's elements:\n",k);
	for(i=0;i<k;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("array c is :");
	for(i=0;i<n+k;i++){
	if(i<n)
	 {
	 	c[i] = a[i];
	 }
	else 
	{
		c[i] =b[i-n];
	 } 
	printf("%d,",c[i]); 
  }
	
	
	
}
