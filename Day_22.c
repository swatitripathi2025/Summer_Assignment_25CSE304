#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int flag=1;

    printf("Enter string: ");
    scanf("%s",str);

    int len=strlen(str);

    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

#include <stdio.h>

int main() {
    char str[200];
    int words=0;

    printf("Enter sentence: ");
    fgets(str,200,stdin);

    for(int i=0;str[i]!='\0';i++){
        if((i==0 && str[i]!=' ') || (str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'))
            words++;
    }

    printf("Words = %d",words);

    return 0;
}

#include <stdio.h>

int main() {
    char str[100], ch;
    int count=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    printf("Enter character: ");
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';i++)
        if(str[i]==ch)
            count++;

    printf("Frequency = %d",count);

    return 0;
}

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
        if(str[i]!=' ')
            result[j++]=str[i];

    result[j]='\0';

    printf("%s",result);

    return 0;
}