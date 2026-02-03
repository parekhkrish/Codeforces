#include<iostream>
using namespace std;
int main()
{
    int n ;
    float totalJuce = 0;
    cin>>n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        totalJuce += (arr[i]/100);
    }
    cout<<(totalJuce/n)*100;
    return 0;
}
