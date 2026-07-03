#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged Array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], b[100], unionArr[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        unionArr[k++] = a[i];

    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(b[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            unionArr[k++] = b[i];
    }

    printf("Union:\n");
    for(i = 0; i < k; i++)
        printf("%d ", unionArr[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], b[100];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection:\n");

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], b[100];
    int n1, n2, i, j, found = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common Elements:\n");

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No common elements.");

    return 0;
}
