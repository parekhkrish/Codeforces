#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    getchar();
    
    for(int i = 0; i < strlen(str1); i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            str1[i] -= 32;
    }


    for(int i = 0; i < strlen(str2); i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            str2[i] -= 32;
    }

    int n = strcmp(str1, str2);
    if(n==0)
    printf("0");
    else if(n>0)
    printf("1");
    else
    printf("-1");
}