#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    scanf("%s%s",s1,s2);

    strcpy(temp,s1);
    strcat(temp,s1);

    if(strstr(temp,s2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];

    scanf("%s",str);

    for(int i=0;str[i];){
        int count=1;

        while(str[i]==str[i+1]){
            count++;
            i++;
        }

        printf("%c%d",str[i],count);
        i++;
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i=0,j=0,max=0;

    fgets(str,200,stdin);

    while(1){
        if(str[i]==' '||str[i]=='\0'||str[i]=='\n'){
            word[j]='\0';

            if(j>max){
                max=j;
                strcpy(longest,word);
            }

            j=0;

            if(str[i]=='\0'||str[i]=='\n')
                break;
        }else{
            word[j++]=str[i];
        }
        i++;
    }

    printf("%s",longest);

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];

    scanf("%s",str);

    for(int i=0;str[i];i++){
        int flag=0;

        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                flag=1;
                break;
            }
        }

        if(!flag)
            printf("%c",str[i]);
    }

    return 0;
}
