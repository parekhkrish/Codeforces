#include<stdio.h>
int main()
{
    int n,k,p=0;
    scanf("%d %d",&n,&k);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[k-1]!=0)
        {
        if(arr[i]>=arr[k-1] )
        {
            p++;
        }
        }
        else{
         if(arr[i]>arr[k-1] )
        {
            p++;
        }   
        }
    }
    printf("%d",p);
}