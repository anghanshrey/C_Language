#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter the array's  row size :");
	scanf("%d",&r);
	printf("enter the array's column size :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum =0 ,row,col;
	printf("enter array's elements :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	
	printf("enter row number :");
	scanf("%d,",&row); 
	
	printf("elements of row : ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		 if(i==row)
		  {
		  	printf("%d",a[i][j]);
		  	sum+=a[i][j];
		  }
	   }
	}
	printf("\nthe sum of a row:  %d \n",sum);
	
		printf("enter column number :");
	    scanf("%d",&col); 
	    printf("elements of column :");
	    
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		 if(j==col)
		  {
		  	printf("%d,",a[i][j]);
		  	sum+=a[i][j];
		  }
	   }
	}
	printf("\nthe sum of a column:%d \n",sum);
}
