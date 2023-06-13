#include<stdio.h>
main()
{    
  int n;
  int a[n],i;
  float sum =0.0;
 printf("enter n:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
           printf("enter a[%d]: ",i);
           scanf("%d",&a[i]);
           sum+=a[i];
  
  }
  for(i=0;i<n;i++) {
  	printf("a[%d]: %d\n",i,a[i]);
  }
    printf("average of an array %f",sum/n);
  



}

