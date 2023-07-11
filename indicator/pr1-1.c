#include<stdio.h>
#include<string.h>
main()
{
	
	char *str1[20];
	
	printf("enter any string :");
	scanf("%[^\n]",&str1);
	
	int *p;
	int c=0;
	
	c=strlen(str1);
	p=&c;
	
	
	printf("the lenght of a string is :%d",*p);
}
