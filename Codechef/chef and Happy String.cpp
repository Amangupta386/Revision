#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define sz size()
#define nl endl
#define ln length()
#define R(i, a, b) for (auto i = (a); i < (b); ++i)
#define L(i, a, b) for (auto i = (b) - 1; i >= (a); --i)
#define N(a) int((a).size())
#define V(a) (a).begin(), (a).end()
const double PI = 3.141592653589793238;
const double inf = 1.0e+18;
const int mod = 100000007;

using namespace std;
int ischar(char f){
    return f == 'a'| f == 'e'| f == 'i'| f =='0'| f == 'u';
}
void solve(){
    string str;
    cin>>str;
    int count = 0;
    int flag = 0;
    for(int i = 0; i<str.ln; i++){
        if(ischar(str[i]) & ischar(str[i+1]) 
            & ischar(str[i+2])){
            flag = 1;
            break;
        }
    }
    if(flag) cout<<"Happy"<<endl;
    else cout<<"Sad"<<endl;
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    int tests; cin>>tests;
    for(int i = 0; i < tests; i++){
        // cout<<"Case #"<<i + 1<<": ";
        solve();
    }
    return 0;
}
