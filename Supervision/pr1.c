#include<stdio.h>
main()
{
	FILE *p1,*p2;
	
	p1 = fopen("C:\\Users\\r32\\Desktop\\even.txt\n","w");
	fprintf(p1,"Even numbers from even_file.txt:");
	
	int i;
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(p1,"%d ",i);
		}
	}
	
	fclose(p1);
	
	p2 =fopen("C:\\Users\\r32\\Desktop\\odd.txt\n","w");
	fprintf(p2,"odd numbers from odd_file.txt:");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(p2,"%d ",i);
		}
	}
	
	fclose(p2);
	
}
