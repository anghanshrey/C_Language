#include<stdio.h>
int crud(int =a[],int n)
{
	printf("-------enter------");
	printf("1) insert in array\n");
	printf("2) display in array\n");
	printf("3) delete in array\n");
	printf("4) updete in array\n");
	printf("5) exit in array\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			n =insert(a,n);
			system("clear");
			break;
		case 2:
			display(a,n);
			system("clear");
			break;
		case 3:
			n =delete(a,n);
			system("clear");
			break;
		case 4:
			n =updete(a,n);
			system("clear");
			break;
		case 5:
			printf("exit ....");
			default
			{
				printf("exit succefully:");
						}			
			
		
	}
	return choice;
}
int insert(int a[],int n)
{
	int pos,val,i;
	
	printf("enter position:");
	scanf("%d",&pos);
	printf("enter value:");
	scanf("%d",&val);
	
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos] =val;
	n++;
	return
}
void main()
{
	int n,choice;
	
	printf("enter anu array size :");
	scanf("%d",&n);
	int a[n];
}
