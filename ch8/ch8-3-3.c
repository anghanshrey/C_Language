#include<stdio.h>
main()
{
	int r,c;
	printf("enter the array's row  size :");
	scanf("%d",&r);
	printf("enter the array's row size :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum =0;
	printf("enter array's elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("the sum of diagonal elements of an array :%d",sum);
}
