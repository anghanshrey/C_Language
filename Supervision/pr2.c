#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];
	char name1[20];
	int chemistry;
	int mathematics;
	int physics;
};

main()
{

FILE *p1;

int sum =0;
float divi =0;
p1=fopen("C:\\Users\\r32\\Desktop\\student.txt","w");

struct student s[5];

int i;

for(i=0;i<5;i++)
{
	printf("Enter details of Student %d:\n",i+1);
	
	printf("Roll no => ");
	scanf("%d",&s[i].rollno);
	
	printf("name => ");
	scanf("%s %s",&s[i].name,&s[i].name1);
	
	printf("chemistry  => ");
	scanf("%d",&s[i].chemistry);
	
	printf("mathematics => ");
	scanf("%d",&s[i].mathematics);
	
	printf("physics  => ");
	scanf("%d",&s[i].physics);
}

fprintf(p1,"Roll no\tname\t\tchemistry\tmathematics\tphysics\ttotal\t\tpercent\t\n");

      for(i=0;i<5;i++)
      {
      	    sum =s[i].chemistry+s[i].mathematics+s[i].physics;
			divi=s[i].chemistry+s[i].mathematics+s[i].physics;  
      	    fprintf(p1,"%d\t%s %s\t\t%d\t\t%d\t\t%d\t%d/300\t\t%.2f\t\n",s[i].rollno,s[i].name,s[i].name1,s[i].chemistry,s[i].mathematics,s[i].physics,sum,divi/300*100);
	  }
      fclose(p1);
}
