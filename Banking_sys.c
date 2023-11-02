#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
#include<string.h>

int Fint=1;
char name[20]; int ac_no;
float balance;


void final_task()
{
printf("\n\t\t\t==========================="); printf("\n\t\t\t| 1. Go Back To Main Menu |"); printf("\n\t\t\t| 0. EXIT	|"); printf("\n\t\t\t===========================");

printf("\n\t\t\tEnter your choise: "); scanf("%d",&Fint);
if (Fint==1)
main(); else if (Fint==0)
main();
else
{
printf("\n\t\t\t***************************"); printf("\n\t\t\t* Invalid Choise Entered *"); printf("\n\t\t\t***************************\n");
}
}
 
void Create_Acc()
{
printf("\n\t\t\tEnter your name:"); scanf("%s",name);
printf("\n\t\t\tEnetr your Account No:"); scanf("%d",&ac_no);
printf("\n\t\t\tEnter your initial balance:"); scanf("%f",&balance);

final_task();
}


void Show_Acc()
{
int temp;
printf("\n\t\t\tEnter your Account no:"); scanf("%d",&temp);
if(temp==ac_no)
{
printf("\n\t\t\tAccount holder: %s",name); printf("\n\t\t\tAccount No: %d",ac_no); printf("\n\t\t\tAccount balance: $%.2f",balance);
}
else
printf("\n\t\t\tInvalid Account No."); final_task();
}
void Deposite()
{
float temp,Deposite; printf("\n\t\t\tEnter your Account no:");
 
scanf("%f",&temp); if(temp==ac_no)
{
printf("\n\t\t\tEnter Deposite Amount:"); scanf("%f",&Deposite); balance+=Deposite;
printf("\n\t\t\tNew balance: %2.f",balance);
}
else
printf("\n\t\t\tInvalid Account No."); final_task();


}
void Withdraw()
{
float temp,Withdraw; printf("\n\t\t\tEnter your Account no:"); scanf("%f",&temp);
if(temp==ac_no)
{
printf("\n\t\t\tEnter Withdraw Amount:"); scanf("%f",&Withdraw);
balance-=Withdraw;
printf("\n\t\t\tNew balance: %.2f",balance);
}
else
printf("\n\t\t\tInvalid Account No."); final_task();
}
 
int main()
{
int Mint; clrscr(); if(Fint==0)
goto c;
else




printf("\n\t\t\t ======================="); printf("\n\t\t\t | Welcome To Our Bank |"); printf("\n\t\t\t ======================="); printf("\n\t\t\t	:: MAIN MEDNU :: \n"); printf("\n\t\t\t 1. Open Account			"); printf("\n\t\t\t 2. Show Account Details"); printf("\n\t\t\t 3. Deposit		"); printf("\n\t\t\t 4. Withdraw			"); printf("\n\t\t\t 0. EXIT	"); printf("\n\t\t\t========================");

printf("\n\t\t\tEnter your choise: "); scanf("%d",&Mint);

if(Mint==1)
{
clrscr(); Create_ac();
}
else if(Mint==2)
{
clrscr();
 
Show_ac();

}
else if(Mint==3)
{
clrscr(); Deposite();
}
else if(Mint==4)
{
clrscr(); Withdraw();
}
else if(Mint!=0 && (Mint>8 || Mint<0) )
{
printf("\n\t\t\t***************************"); printf("\n\t\t\t* Invalid Choise Entered *"); printf("\n\t\t\t***************************\n");
}


else if(Mint==0)
goto c;


getch(); c:
printf("\n\t\t\t*******************************"); printf("\n\t\t\t** The Program is now Exit **"); printf("\n\t\t\t** Prsee any key to EXIT **"); printf("\n\t\t\t*******************************\n");
return 0;

}
