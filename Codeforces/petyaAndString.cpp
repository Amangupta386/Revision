# Apna Code !!!
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

string capital(string s){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 97)
            s[i] = s[i] - 32;
    }
    string ans = s;
    return ans;
}

int32_t main(){
    string str, atr;
    getline(cin, str);
    getline(cin, atr);
    string s = capital(str);
    string a = capital(atr);
    // cout<<s<<nl<<a;
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == a[i]){
            count++;
        }
        else if (s[i] != a[i]){
            int t1 = s[i];
            int t2 = a[i];
            if(t1<t2){
                cout<<-1<<endl;
                break;
            }
            else{
                cout<<1<<endl;
                break;
            }
        }
    }
    if(count == s.ln)
    cout<<0<<endl;
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

int32_t main(){
    string s, a;
    cin>>s>>a;
    int i;
    for(int i = 0; i<a.size(); i++){
        s[i] = towlower(s[i]);
        a[i] = towlower(a[i]);
    }
    if(s==a){
        cout<<"0"<<endl;
    }
    else{
        for(int i = 0; i<a.size(); i++){
            if(s[i] < a[i]){
                cout<<-1<<endl;
                break;
            }
            if(s[i] > a[i]){
                cout<<1<<endl;
                break;
            }
        }
    }
}

