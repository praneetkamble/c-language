#include<stdio.h>

int main() {
    
    int balance = 10000, wirhdraw, deposite,choice,pin;
    printf("-----------------------------------------------------------------------------------\n");
    printf("\t\t\t\t***Welcome to the ATM***\n");
    printf("-----------------------------------------------------------------------------------\n");

    printf("Enter your pin number: ");
    scanf("%d", &pin);

    system("cls");
    

   

    switch (pin) {
        case 1011:
        printf("\t\t\t\t***WELCOME PRANEET***\n");
        printf("our services are:-\n");
        printf("-----------------------------------------------------------------------------------\n");
        printf("1.check balance \t\t\t\t\t2.withdraw\n");
        printf("3.deposit \t\t\t\t\t\t4.exit\n");
        printf("-----------------------------------------------------------------------------------\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        system("cls");
        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &wirhdraw);
                if (wirhdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= wirhdraw;
                    printf("Please collect your cash\n");
                    printf("Your new balance is: %d\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposite);
                balance += deposite;
                printf("Your new balance is: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using our services\n");
                break;
            default:
                printf("Invalid choice\n");
        }
        break;
        case 1009:
         printf("\t\t\t\t***WELCOME USER 2***\n");
        printf("our services are:-\n");
        printf("-----------------------------------------------------------------------------------\n");
        printf("1.check balance \t\t\t\t\t2.withdraw\n");
        printf("3.deposit \t\t\t\t\t\t4.exit\n");
        printf("-----------------------------------------------------------------------------------\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);   
        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &wirhdraw);
                if (wirhdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= wirhdraw;
                    printf("Please collect your cash\n");
                    printf("Your new balance is: %d\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposite);
                balance += deposite;
                printf("Your new balance is: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using our services\n");
                break;
            default:
                printf("Invalid choice\n");
        }
        break;
        case 0001:
        printf("\t\t\t\t***WELCOME USER 3***\n");
        printf("our services are:-\n");
        printf("-----------------------------------------------------------------------------------\n");
        printf("1.check balance \t\t\t\t\t2.withdraw\n");
        printf("3.deposit \t\t\t\t\t\t4.exit\n");
        printf("-----------------------------------------------------------------------------------\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &wirhdraw);
                if (wirhdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= wirhdraw;
                    printf("Please collect your cash\n");
                    printf("Your new balance is: %d\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposite);
                balance += deposite;
                printf("Your new balance is: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using our services\n");
                break;
            default:
                printf("Invalid choice\n");
        }
        break;
        case 1111:
        printf("\t\t\t\t***WELCOME USER 4***\n");
        printf("our services are:-\n");
        printf("-----------------------------------------------------------------------------------\n");
        printf("1.check balance \t\t\t\t\t2.withdraw\n");
        printf("3.deposit \t\t\t\t\t\t4.exit\n");
        printf("-----------------------------------------------------------------------------------\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &wirhdraw);
                if (wirhdraw > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= wirhdraw;
                    printf("Please collect your cash\n");
                    printf("Your new balance is: %d\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposite);
                balance += deposite;
                printf("Your new balance is: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using our services\n");
                break;
            default:
                printf("Invalid choice\n");
        }
        break;
        default:
        printf("Invalid pin number\n");

    }
    return 0;
        

}

