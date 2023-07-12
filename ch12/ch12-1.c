#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[20];
    int age;
    char course[30];
    char city[20];
    int standard;
    char school[30];
}; 

void main()
{
	int i;
	
	struct student s[3];
	for(i=0;i<3;i++)
	{
		printf("student :(%d...%d)\n",i+1,3);
        printf("id\t:");
        scanf("%d",&s[i].id);
        printf("name\t:");
        scanf("%s",&s[i].name);
        printf("age\t:");
        scanf("%d",&s[i].age);
        printf("course\t:");
        scanf("%s",&s[i].course);
        printf("city\t:");
        scanf("%s",&s[i].city);
        printf("standard:");
        scanf("%d",&s[i].standard);
        printf("school\t:");
        scanf("%s",&s[i].school);
      
	}
		printf("id\tname\tage\tcourse\tcity\tstandard\tschool\t\n");
		
		for(i=0;i<4;i++)
		{
			printf("%d\t%s\t%d\t%s\t%s\t%d\t\t%s\t\t\t\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
		}
	   
}
