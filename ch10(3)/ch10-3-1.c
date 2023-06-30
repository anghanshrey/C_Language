#include<stdio.h>
int fac(int n)
{
	int i;
	if(n>1)
	{
		return n*fac(n-1);
	}
	else{
		return 1;
	}
}
void main(){
	int n,matipal;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	matipal=fac(n);
	
	printf("your factorial number:%d",matipal);
	
	fac(n);
}
