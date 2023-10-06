#include<stdio.h>


int ac(int );

void main(){

 
  ac(1);


}

int ac(int num){

  if (num<=5)
  {
    printf("%d,",num);
    
    num++;

    return ac(num);
  }
  else{
    return 0;
  }
}