#include<stdio.h>
main()
{
  int n,i;
  	 
  printf("enter n:");
  scanf("%d",&n);
  
  int  a[n],b[n];
  
  printf("enter array a's elements:\n");
  
 for(i=0;i<n;i++)
  {
  	      
           printf("enter a[%d]: ",i);
           scanf("%d",&a[i]);
  
  }
     printf("enter array b's elements:\n");
     
    for(i=0;i<n;i++)  {
  	printf("enter a[%d]: ",i);
  	scanf("%d",&b[i]);
  }
   
  printf("array c is :");
  
    for(i=0;i<n;i++){
    printf("%d,",a[i]+b[i]);
    }
  



}

