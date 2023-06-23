#include<stdio.h>

void main()
{
	int com,i;
	char name[20],rev[20];
	
	printf("enter name: ");
	gets(name);
	
	strcpy(rev,name);
	
	
	strrev(name);
	com = strcmp(name,rev);

	if(com==0){
		printf("given is a palindrome ..");
	}
	else{
		printf("GIVEN IS a non palindrome ..");
	}
	
}

