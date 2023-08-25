#include <stdio.h>

int main(){
  // Array 1
  int array1[6];

    array1[0] = 12;
    array1[1] = 23;
    array1[2] = 34;
    array1[3] = 45;
    array1[4] = 56;
    array1[5] = 67;

  // Array 2
  
  int array2[6];

  array1[0] = 98;
  array1[1] = 76;
  array1[2] = 65;
  array1[3] = 54;
  array1[4] = 43;
  array1[5] = 32;

  int a;
  int array3[a];

if (a>0 , a<=6,a++)
{
  array3[a] = array1[a]+array2[a];
}

if (a>0, a<7,a++)
{
  printf("Array3= %d\n " , array3[a]);
}

  return 0;
}