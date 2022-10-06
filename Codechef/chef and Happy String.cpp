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
void solve(){
    string s;
       cin>>s;
       int j,i;
       int l=1;
       for(j=0;j<s.length()-3;j++){
           l=1;
           for(i=j;i<j+3;i++){
               if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                  l=0;
               }
           }
           if(l==1){
               cout<<"HAPPY"<<endl;break;}
           }
       if(l==0)
     cout<<"SAD"<<endl;
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
