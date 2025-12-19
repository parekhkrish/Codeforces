#include<stdio.h>
#include<string.h>

int main()
{
    char s1[101], s2[101];
    int k = 1; 

    scanf("%s", s1);
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2))
        k = 0;
    else
    {
        for(int i = 0, j = strlen(s2) - 1; i < strlen(s1) && j >= 0; i++, j--)
        {
            if(s1[i] != s2[j])
            {
                k = 0;
                break;
            }
        }
    }

    if(k == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}