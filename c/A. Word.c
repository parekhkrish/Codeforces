#include<stdio.h>
#include<string.h>
int main()
{
    int c=0, k=0;
    char s[200];
    scanf("%s",s);
    int n = strlen(s);
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        k++;
        else if(s[i<='A'&&s[i]>='Z'])
        c++;
    }
    
    if(c>k)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            s[i] -= 32; 
        } 
    }
    else if(k>c)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i] += 32;
        } 
    }
    else if(k==c)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i] += 32;
        } 
    }
    
    printf("%s",s);
}