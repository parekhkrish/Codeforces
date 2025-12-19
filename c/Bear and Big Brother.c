#include<stdio.h>
int main()
{
    int m, n,i=0;
    scanf("%d %d",&m,&n);
    while (m<=n)
    {
        m = m*3;
        n = n*2;
        i++;
    }
    
    printf("%d",i);
    
}