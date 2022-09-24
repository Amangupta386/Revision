#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int a, b, x;
        cin>>a>>b>>x;
        if(abs(a-b) % (2*x))
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
