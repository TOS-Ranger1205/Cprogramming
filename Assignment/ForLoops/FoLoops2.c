/*Question: Write a Program to Generate Multiplication Table ?
Enter print Table Number : 2

2 x 1  = 2
2 x 2  = 4
.
.
2 x 10 = 20

Answer:


#include<stdio.h>

int main(void) {

  for( int a = 1; a <=10; a++){
   // printf("\n Patel.com \n");
    //printf("%d\n", a);
    printf("%d X %d = %d\n ",2 ,a , a*2  );
  }

  return 0;
}


Another solution:*/

#include<stdio.h>
int main(){

    int table;

    printf("\n enter table number \n");
    
    scanf("%d",&table);
    for(int a = 1 ; a <= 10; a++ ){
        printf("%d",table);
        printf(" x ");
        printf("%d",a);
        printf(" = ");
        printf("%d\n",a*table);
        


    }

    return 0;
}

