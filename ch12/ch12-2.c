#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[20];
    int age;
    char role[30];
    char city[20];
    int experience;
    char company_name[30];
}; 


void main()
{
	int i,n;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("employee :(%d...%d)\n",i+1,n);
        printf("id\t\t:");
        scanf("%d",&s[i].id);
        printf("name\t\t:");
        scanf("%s",&s[i].name);
        printf("age\t\t:");
        scanf("%d",&s[i].age);
        printf("role\t\t:");
        scanf("%s",&s[i].role);
        printf("city\t\t:");
        scanf("%s",&s[i].city);
        printf("experience\t:");
        scanf("%d",&s[i].experience);
        printf("company name\t:");
        scanf("%s",&s[i].company_name);
      
	}
		printf("id\tname\tage  \trole  \t  city\t    experience\t   company name\t\n======= ======= ======= ======== ========== ============== ================\n");
		
		for(i=0;i<n;i++)
		{
			printf("%d\t%s\t%d  \t%s\t %s\t    %d\t           %s\t\t\t\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].experience,s[i].company_name);
		}
	   
}
