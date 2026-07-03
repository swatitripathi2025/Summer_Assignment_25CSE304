#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], smallest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}