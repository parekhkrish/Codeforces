#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int n,p=0;
    int k;
    scanf("%s",str);
    getchar();
    n = strlen(str);
    
    for(int i=0;i<n;i++)
    {   
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                p++;
                break;
            }
        }
    }
    if((n-p)%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
}
