#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][3];

    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int k = 0;   
    int sum;

    
    for(int i = 0 ; i < n ; i++)
    {
        sum = arr[i][0] + arr[i][1] + arr[i][2];

        if(sum > 1)
        {
            k++;
        }
    }

    printf("%d", k);

    return 0;
}
