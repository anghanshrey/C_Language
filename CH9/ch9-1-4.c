#include<stdio.h>
main()
{
	char str1[20];
	int i;
	
	printf("enter any string :");
	scanf("%[^\n]",&str1);
	for(i=0;i<20;i++)
	{
		if(str1[i] == ' ')
		{
			str1[i+1] -= 32;
		}
		
		else 
		{
			if(i ==0)
			{
			   if(str1[i] =65 && str1[i]<=90)
			  {
				
			  }
			else
			{
				 str1[i] -=32;
			}
		  }
			
	  }
	}
		printf("title  string :%s",str1);
}
