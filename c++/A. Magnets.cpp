#include<iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cin>>num;
    int mag[num];
    for (int i = 0; i < num; i++)
    {
        cin>>mag[i];
    }
    for (int i = 0; i < num-1; i++)
    {
        if(mag[i]!=mag[i+1])
        {
            count++;
        }
    }
    cout<<count+1;
    
    
}