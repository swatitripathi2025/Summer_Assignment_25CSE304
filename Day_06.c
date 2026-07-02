#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, rem;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary = %d", binary);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int binary, rem, i = 0;
    long decimal = 0;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal = %ld", decimal);

    return 0;
}

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        if(n % 2 == 1)
            count++;
        n /= 2;
    }

    printf("Set Bits = %d", count);

    return 0;
}

#include <stdio.h>

int main() {
    int x, n, i;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++)
        result *= x;

    printf("%d^%d = %lld", x, n, result);

    return 0;
}
