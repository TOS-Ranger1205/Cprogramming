#include <stdio.h>

int main(){
  // Array 1
  int array1[6] = {10,20,30,40,50,60};

  // Array 2
  
  int array2[6] ={10,20,30,40,50,60};

  int a;
  
for(a=0;a<6;a++)
{
  printf("Array3[%d]= %d\n",a,(array1[a]+array2[a]));
  
}
  
  return 0;
}