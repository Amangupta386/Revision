//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> goals(int X, int Y, int Z){
        int cnt1 = 0, cnt2 = 0;
        vector<int>ans;
        
        while(Z > 1){
            
            if( X % Z == 0){
                X--;
                cnt1++;
            }
            if( Y % Z == 0 ){
                Y--;
                cnt2++;
            }
            else{
                Z--;
            }
        }
        
        ans.push_back(cnt1);
        ans.push_back(cnt2);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends
