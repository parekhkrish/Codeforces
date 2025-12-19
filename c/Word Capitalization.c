#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    scanf("%s",str);

        if(str[0]>='a' && str[0]<='z')
        {
            str[0] = str[0] - 32;
        }

    printf("%s",str);

}