#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void mainMenu();
void menuExit();
void checkBalance(float balance);
float moneyDeposit(float balance);
float withdraw(float balance);

int main(){
    int option;
    float balance = 10000.00;
    int choose;

    bool again = true;

    while(again){
        mainMenu();
        
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Your selection: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            
            case 2:
                system("CLS");
                moneyDeposit(balance);
                break;

            case 3:
                system("CLS");
                withdraw(balance);
                break;
            case 4:
                system("CLS");
                menuExit();
                return 0;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);

        system("CLS");

        if (choose == 2){
            again = false;
            menuExit();
        }
    }

    return 0;
}

void mainMenu(){
    printf("******************Hello!*******************\n");
    printf("Hello chief! You're welcome to School of programming atm prototype\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
}


void checkBalance(float balance){
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
}

float moneyDeposit(float balance){
    float deposit;
    printf("You Choose to make a deposit to your accout\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    printf("Input amount to be deposited: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n\n****Your New Balance is:   $%.2f\n\n", balance);
}

float withdraw(float balance){
    float withdrawAmount;
    printf("You Choose to make a withdrawal from your accout\n");
    printf("Input amount to withdraw: ");
    scanf("%f", &withdrawAmount);

    balance -= withdrawAmount;
    printf("\n\n****Your New Balance is:   $%.2f\n\n", balance);
}

void menuExit(){
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----BROUGHT TO YOU BY School of Programming-----\n");
}

