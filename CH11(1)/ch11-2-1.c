#include<stdio.h>
int getInt();


void main()
{
	int n,sum =0;
	
	printf("enter the array's size :");
	n =getInt();
	
	int *p[n],*r[n],i,a[n];
	
	printf("enter array elements :\n");
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		r[n-i-1]=&a[i];
	}
	
	printf("Reversed array elements:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*r[i]);
	}
	

	
	
	
}

int getInt()
{
	int x;
	scanf("%d",&x);
	return x;
}
