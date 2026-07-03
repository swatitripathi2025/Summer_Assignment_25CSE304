#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = arr[0];

    for(i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = first;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int last = arr[n - 1];

    for(i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[j++] = arr[i];

    while(j < n)
        arr[j++] = 0;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
