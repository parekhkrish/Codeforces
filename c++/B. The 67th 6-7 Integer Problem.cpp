#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sum(n);

    for(int i = 0; i<n; i++){
        vector<int> arr(7, 0);
        int ans = 0;
        for(int i = 0; i < 7; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < 6; i++){
            ans += arr[i] * -1;
        }
        ans += arr[6];
        sum[i] = ans;
    }
    for(int i = 0; i<n; i++){
        cout<<sum[i]<<endl;
    }

    return 0;
}