#include <stdio.h>

int main() {
    int a[50],b[50],c[100];
    int n,m;

    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);

    int i=0,j=0,k=0;

    while(i<n&&j<m){
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }

    while(i<n)
        c[k++]=a[i++];

    while(j<m)
        c[k++]=b[j++];

    for(i=0;i<k;i++)
        printf("%d ",c[i]);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, found[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    for(i = 0; str1[i] != '\0'; i++) {
        for(j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j] && found[(int)str1[i]] == 0) {
                printf("%c ", str1[i]);
                found[(int)str1[i]] = 1;
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
        scanf("%s", names[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char words[100][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(i = 0; i < n; i++)
        scanf("%s", words[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}

