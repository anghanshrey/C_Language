#include<stdio.h>
void main()
{
	FILE *p1,*p2;
	
	p1 = fopen("G:\new\even.txt","w");
	fprintf("Even numbers from even_file.txt:");
	
	int i;
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(p1,"%d",i);
		}
	}
	
	fclose(p1);
	
	p2 =fopen("G:\new\odd.txt","w");
	fprintf("odd numbers from odd_file.txt:");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(p2,"%d",i);
		}
	}
	
	fclose(p2);
	
}
