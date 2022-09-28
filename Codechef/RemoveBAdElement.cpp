#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max = INT_MIN;
        unordered_map<int, int> m;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(auto a:m){
            if(a.second > max){
                max = a.second;
            }
        }
        cout<<n-max<<endl;
    }
    return 0;
}
