#include <stdio.h>

int main(void) {
  int number1;
  int number2;
  int number3;
    // take user input 
  printf("Enter Number 1 \n");
  scanf("%d",&number1);
  printf("Enter Number 2 \n");
  scanf("%d",&number2);
  printf("Enter Number 3 \n");
  scanf("%d",&number3);
  
  if(number1 < number2 && number1 < number3){
    printf("Number 1 is smallest ....");
  }else{

      if(number2 < number3 && number2 < number1){
         printf("Number 2 is smallest ....");
      }else{
        printf("Number 3 is smallest ....");
      }
    
  }

  return 0;
}