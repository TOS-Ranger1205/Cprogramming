#include<stdio.h>    
int main()    
{    
 int num1=0,num2=1,num3,i,number;    
  printf("Enter the number of elements:");    
  scanf("%d",&number); 
   
 printf("\n%d,%d",num1,num2);
 for(i=2;i<number;i++) 
 {    
  num3=num1+num2;
  printf(",%d",num3);
  num1=num2;    
  num2=num3;
 }

  printf("\n");
  return 0;  
 }    

