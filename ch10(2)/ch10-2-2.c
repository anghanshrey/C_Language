#include<stdio.h>

 int stringlength(char *str){
 	int length =0;
 	while(*str != '\0'){
 		length++;
 		str++;
	 }
	 return length;
 	
 }
int main(){
	char str[100];
	printf("enter anu string :");
	scanf("%[^\n]%*c",str);
	
	int length =stringlength(str);
	
	printf("length of the string :%d\n",length);
	
	return 0;
}
