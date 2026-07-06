#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    for(int i=0;str[i];i++){
        int count=0;
        for(int j=0;str[j];j++)
            if(str[i]==str[j])
                count++;

        if(count==1){
            printf("%c",str[i]);
            return 0;
        }
    }

    printf("No unique character");
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    for(int i=0;str[i];i++){
        for(int j=i+1;str[j];j++){
            if(str[i]==str[j]){
                printf("%c",str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    if(strlen(s1)!=strlen(s2)){
        printf("Not Anagram");
        return 0;
    }

    int count[256]={0};

    for(int i=0;s1[i];i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0;i<256;i++){
        if(count[i]!=0){
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int freq[256]={0};

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i];i++)
        freq[str[i]]++;

    int max=0;
    char ch;

    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            ch=i;
        }
    }

    printf("Maximum occurring character = %c",ch);

    return 0;
} 
