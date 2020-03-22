%DESCRIPTION: THIS PROGRAM WORKS IN A SIMILAR MANNER AS THAT OF AN ATM
              AND WE CAN WITHDRAW, DEPOSIT AND CHECK THE BALANCE IN THE
              ACCOUNT AFTER ENTERING THE PIN. %

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction='y';

int main()
{
    while(pin!= 1234)
    {
        printf("ENTER YOUR SECRET PIN:");
        scanf("%d", &pin);
        if(pin!= 1234)
            printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        printf("*******Welcome to ATM Service*******\n");
        printf("1.Check Balance\n");
        printf("2.Withdraw Cash\n");
        printf("3.Deposit Cash\n");
        printf("4.Quit\n");
        printf("************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("\nYOUR BALANCE IN Rs : %lu ", amount);
            break;

            case 2:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);
            if(withdraw%100!=0)
            {
                printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if(withdraw>(amount-500))
            {
                printf("\n INSUFFICIENT BALANCE");
            }
            else
            {
                    amount=amount-withdraw;
                    printf("\n\n PLEASE COLLECT CASH");
                    printf("\n YOUR CURRENT BALANCE IS %lu",amount);
            }
            break;

            case 3:
            printf("\nENTER THE AMOUNT TO DEPOSIT");
            scanf("%lu", &deposit);
            amount=amount+deposit;
            printf("YOUR BALANCE IS %lu", amount);
            break;

            case 4:
            printf("\nTHANKYOU FOR USING THE ATM");
            break;

            default:
            printf("\nINVALID CHOICE");
        }
        printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION? (Y/N): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if(transaction== 'n' || transaction== 'N')
            k=1;
    }
    while(!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
    return 0;
}
