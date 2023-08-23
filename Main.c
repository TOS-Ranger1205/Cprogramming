#include<stdio.h>

int main(){

    int data[9];

    // store data into array 

    data[0] = 23;
    data[1] = 90;
    data[2] = 8;
    data[3] = 54;
    data[4] = 65;
    data[5] = 83;
    data[6] = 25;
    data[7] = 57;
    data[8] = 52;

    // access data 


    for (size_t i = 0; i < 9; i++)
    {
      
        printf("%d\n",data[i]);
    }
    

    return 0;
}