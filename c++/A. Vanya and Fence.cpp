#include<iostream>
using namespace std;
int main()
{
    int num, hight;
    cin>>num>>hight;
    int Friend[num];
    int roadlen=0;
    for(int i=0; i<num; i++)
    {
        cin>>Friend[i];
        if(Friend[i]<=hight)
            roadlen++;
        else if (Friend[i]>hight)
        {
            roadlen = roadlen + 2;
        }
    }
    cout<<roadlen;
    
    
}
