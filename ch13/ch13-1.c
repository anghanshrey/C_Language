#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	int a;
	
	fp1=fopen("C:\\Users\\r32\\Desktop\\file1.txt","r");
		
	fscanf(fp1,"%d",&a);	
		
	fclose(fp1);
	printf("data form file %d",a);	
	
	fp2=fopen("C:\\Users\\r32\\Desktop\\file2.txt","w");

    fprintf(fp2,"%d",a);	
	
	fclose(fp2);
}
