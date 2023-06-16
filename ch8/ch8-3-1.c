#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter row:");
	scanf("%d",&r);
	
	printf("enter colums:");
	scanf("%d",&c);
	
	int i,j,a[r][c];
	float ave,sum =0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	 ave=sum/(r*c);
	 printf("Average of an array :%f",ave);

	
}
