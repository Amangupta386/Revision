#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int counter = 0;
        bool zero = false;
        for(int i = 0; i<n; i++){
            int num;
            cin>>num;
            if(num<0)counter++;
            if(num == 0)zero = true;
        }
        if( zero | counter%2 == 0){
            cout<<0<<endl;
        }
        else
            cout<<1<<endl;
    }
    return 0;
}
