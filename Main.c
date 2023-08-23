#include <stdio.h>


int main(){

int num, reverse=0, remainder;
  printf("Enter An Integer= ");
  scanf("%d",&num);

  while(num != 0){
    remainder= num%10;
    reverse= reverse*10 + remainder;
    num/=10;
  }

  printf("Reverse Of your Given Number is : %d",reverse);
  return 0;
}