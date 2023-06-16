#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter row:");
	scanf("%d",&r);
	
	printf("enter colums:");
	scanf("%d",&c);
	
	int i,j,a[r][c],b[r][c];
	printf("enter array A's elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter array B's elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	 
	printf("array c is:\n");
	for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d ",a[i][j]+b[i][j]);
		 }
		 printf("\n");
	  } 

	
}
