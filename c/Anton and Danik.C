#include<stdio.h>
#include<string.h>
int main()
{
    int m,k=0,j=0;
    scanf("%d",&m);
    char s[m];
    getchar();
    scanf("%s",s);
    for(int i=0;i<m;i++)
    {
        if(s[i]=='A')
            k++;
        else if(s[i]=='D')
            j++;
    }
    if(k>j)
    printf("Anton");
    else if (j>k)
    printf("Danik");
    else
    printf("Friendship");
}