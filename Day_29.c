#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n===== Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n===== Array Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3: {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;
            }

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n===== String Menu =====\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Uppercase\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reverse = %s\n", temp);
                break;
            }

            case 3:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }
                printf("Uppercase = %s\n", str);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n===== Inventory Details =====\n");
    printf("Item ID   : %d\n", item.id);
    printf("Item Name : %s\n", item.name);
    printf("Quantity  : %d\n", item.quantity);
    printf("Price     : %.2f\n", item.price);
    printf("Total Cost: %.2f\n", item.quantity * item.price);

    return 0;
}