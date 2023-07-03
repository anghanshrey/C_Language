#include<stdio.h>

struct student {
	
	int id;
	char name[20];
	float per;
};

void main(){
	
	FILE *fp;
	fp=fopen("C:\\Users\\r32\\Desktop\\mohit.xls","a");	
	int n;

	printf("enter n : ");
	scanf("%d",&n);
	struct student s[n];
	
	int i;
	for(i=0; i<n; i++){
		printf("\nstudent %d/%d\n\n",i+1,n);
		printf("enter id\t: ");
		scanf("%d",&s[i].id);
		printf("enter name\t: ");
		scanf("%s",&s[i].name);
		printf("enter per\t: ");
		scanf("%f",&s[i].per);
	}
	for(i=0; i<n; i++){
	fprintf(fp,"%d\t%s\t%.2f\n",s[i].id,s[i].name,s[i].per);
}
fclose(fp);
}
