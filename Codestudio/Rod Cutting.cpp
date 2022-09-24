//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        int *np = new int[n+1]; //prices se ek length extra lii hai bss...
        
        for(int i = 0; i<n; i++){
            np[i+1] = price[i]; // alloted to in np
        }
        
        int *dp = new int[n+1];
        dp[0] = 0;
        dp[1] = np[1];
        
        for(int i = 2; i<n+1; i++){
            dp[i] = np[i]; // first original price put in starting
            
            int li = 1; 
            int ri = i-1;
            while(li <= ri){ // LR Method
                if(dp[li] + dp[ri] > dp[i]){
                    dp[i] = dp[li] + dp[ri];
                }
                li++;
                ri--;
            }
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
