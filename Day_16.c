#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    int arr[n - 1];

    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, maxCount = 0, element;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++)
            if(arr[i] == arr[j])
                count++;

        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element = %d\nFrequency = %d", element, maxCount);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, sum;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                printf("(%d,%d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n;) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

