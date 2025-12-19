#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string word[n];
    int len;
    int i=0;
    while(i<n)
    {
        cin>>word[i];
        i++;
    }
    i=0;
    while(i<n)
    {   
        len = word[i].length();
        if(len>10)
        {
            cout<<word[i][0]<<len-2<<word[i][len-1]<<endl;
        }
        else
        {
            cout<<word[i]<<endl;
        }
        i++;
    }
}  