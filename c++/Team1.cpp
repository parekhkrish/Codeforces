#include<iostream>
using namespace std;
int main()
{
    int n,s=0,k=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
                s++;
        }
        if(s>1)
            k++;
        s=0;
    }    
    
    cout<<k;

}
