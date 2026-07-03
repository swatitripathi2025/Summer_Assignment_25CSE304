#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);

    if(c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }

    int a[r1][c1], b[r2][c2], c[r1][c2];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++)
            sum += a[i][j];

        printf("%d\n", sum);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++)
            sum += a[i][j];

        printf("%d\n", sum);
    }

    return 0;
}