#include<stdio.h>
main()
{    
  int n;
 int a[n],i,count =0;
 printf("enter n:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
           printf("enter a[%d]: ",i);
           scanf("%d",&a[i]);
           count++;
  }
    printf("length of an array %d",count);
  



}

