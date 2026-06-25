#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}

#include <stdio.h>

int main() {
    int num, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}

#include <stdio.h>

int main() {
    int num, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if (num == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}