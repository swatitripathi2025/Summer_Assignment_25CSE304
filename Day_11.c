#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, temp = n;

    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return rev == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}