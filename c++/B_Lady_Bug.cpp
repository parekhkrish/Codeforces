#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> ans;
    while(n--){
        string a, b;
        int a1=0,b0=0;
        int p;
        cin>>p;
        cin>>a>>b;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == '1'){
                a1++;
            }
            if(b[i] == '0'){
                b0++;
            }
        }
        if(a1<=b0 || a1 == 0){
            ans.push_back("yes");
        } else{
            ans.push_back("no");
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }

}