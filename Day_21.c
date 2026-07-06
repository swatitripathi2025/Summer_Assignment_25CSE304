#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    printf("Length = %d", i);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }

    for(int i=len-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels=0, consonants=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);

        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\nConsonants = %d",vowels,consonants);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
        str[i]=toupper(str[i]);

    printf("%s",str);

    return 0;
}