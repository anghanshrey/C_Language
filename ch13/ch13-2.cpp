#include<stdio.h>

main()
{
	FILE *fp3;
	int i;
	
	fp3=fopen("C:\\Users\\r32\\Desktop\\file3.txt","w");
	
	for(i=1;i<=50;i++)
	{
		if(i%3==0 && i%5==0)
		{
			fprintf(fp3,"%d\n",i);
		}
	}
	
	fclose(fp3);
		
	
}
