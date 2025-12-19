#include<stdio.h>
int main()
{
    int n, k=0;
    int arr[100];
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==str[i+1])
        {
            k++;
        }
    }
    printf("%d",k);
}