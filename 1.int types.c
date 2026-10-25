#include<stdio.h>
void main()
{
 int a;
 printf("Enter the number:");
 scanf("%d",&a);
 if(a>0)
  printf("\n%d is positive",a);
 else 
 {
  if(a<0)
   printf("\n%d is negative",a);
  else
   printf("\n%d is zero",a);    
 }
}
