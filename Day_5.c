#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}

#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        rem = temp % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");

    for(i = 1; i <= n; i++) {
        if(n % i == 0)
            printf("%d ", i);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, prime, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            prime = 1;

            for(j = 2; j <= i / 2; j++) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if(prime)
                largest = i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
