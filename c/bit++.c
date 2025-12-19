#include<stdio.h>
#include<string.h>
int main()
{
    int X = 0 ,n ;
    scanf("%d", &n);
    char str[n][5];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(strcmp(str[i], "X++") == 0)
        {
            ++X;
            printf("%d",X );
            break ;
        }
        else if(strcmp(str[i], "X--") == 0)
        {
            --X;
            printf("%d",X );
            break ;
        }
        else if(strcmp(str[i], "--X") == 0)
        {
            --X;
            printf("%d",X );
            break ;
        }
        else if(strcmp(str[i], "++X") == 0)
        {
            ++X;
            printf("%d",X );
            break ;
        }
    }
    

}