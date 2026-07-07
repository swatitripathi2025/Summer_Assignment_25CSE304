#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", b.id);
    printf("Book Name   : %s\n", b.name);
    printf("Author Name : %s\n", b.author);

    return 0;
}

#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount;

    do {
        printf("\n------ BANK MENU ------\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful!\n");
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

#include <stdio.h>

int main() {
    int seats, booked = 0;

    printf("Enter Total Seats: ");
    scanf("%d", &seats);

    while(booked < seats) {
        booked++;
        printf("Ticket %d Booked Successfully\n", booked);

        if(booked == seats)
            break;
    }

    printf("All Seats Booked.\n");

    return 0;
}

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;

    printf("Enter Contact Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("\n----- Contact Details -----\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);

    return 0;
}

