#include <stdio.h>

int main() {

    printf("Enter Size of Your Array:");
    int size;
    scanf("%d",&size);
    char data[size];

    for(int a = 0; a < size;a++){
        printf("Enter Data into array %d\n",(a+1));
        scanf(" %c",&data[a]);
    }



    for(int a = 0; a < size;a++){
        printf("output : %c\n",data[a]);
    }


    return 0;
}



















