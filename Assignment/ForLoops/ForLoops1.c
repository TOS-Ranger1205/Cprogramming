Question: Write a Program to Calculate the Sum of Natural Numbers ?
 
Enter Start Number : 1
Enter End Number : 10

-----------------
total sum of 1 to 10 = 55
----------------- 


Answer:


#include<stdio.h>

int main() {
  int a,sum= 0 ;
  for( int a = 0; a <=10; a++){
    sum += a;
  
  }
  printf("sum of 1 to 10 =%d" , sum );
  
  return 0;
}
