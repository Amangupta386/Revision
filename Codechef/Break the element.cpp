#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int even = 0, odd = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }    
        int ans;
        if(even == n) ans = 0;
        else ans = even;
        cout<<ans<<endl;
    }
    
    return 0;
}
