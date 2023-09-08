#include<stdio.h>
int main(){

    char name[50];
    int age;
    float height;

    printf("Enter Your Name -- \n");
    scanf("%s",name);
    printf("Enter Your age -- \n");
    scanf("%d",&age);
    printf("Enter Your height -- \n");
    scanf("%f",&height);

    printf("Your Input Was --> \n");
    printf("Your name is %s\n",name);
    printf("Your Age is %d\n",age);
    printf("Your Height is %f\n",height);


}