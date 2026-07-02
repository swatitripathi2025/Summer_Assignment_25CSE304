#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("%d", a);
    else if (n == 2)
        printf("%d", b);
    else {
        for (i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci Term = %d", b);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}