#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i++)
    {
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i--)
    {
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);

        for(j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}