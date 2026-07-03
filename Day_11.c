#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum = %d", sum(a, b));

    return 0;
}


#include<stdio.h>

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Maximum = %d", maximum(a, b));

    return 0;
}


#include <stdio.h>


#include <stdio.h>

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(prime(n))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}


#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}