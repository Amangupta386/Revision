#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define sz size()
#define nl endl

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    int tests; cin>>tests;
    for(int i = 0; i < tests; i++){
        int n;
        cin>>n;
        n -= 3;
        n /= 3;
        cout<<n-1<<nl;
    }
    return 0;
}
