// prerequisite hain ->>>> matrix chain multiplication algorithm
ques. link -> https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118784/offering/1381081?leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
void multiply(long F[2][2], long M[2][2]);
void power(long F[2][2], int n);

int fibonacciNumber(int n)
{
    long F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
 
    return F[0][0]%mod;
}
 
void power(long F[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    long M[2][2] = {{1, 1}, {1, 0}};
     
    power(F, n / 2);
    multiply(F, F);
     
    if (n % 2 != 0)
        multiply(F, M);
}
 
void multiply(long F[2][2], long M[2][2])
{
    long x = (F[0][0] * M[0][0])%mod + (F[0][1] * M[1][0])%mod;
    long y = (F[0][0] * M[0][1])%mod + (F[0][1] * M[1][1])%mod;
    long z = (F[1][0] * M[0][0])%mod + (F[1][1] * M[1][0])%mod;
    long w = (F[1][0] * M[0][1])%mod + (F[1][1] * M[1][1])%mod;
     
    F[0][0] = x%mod;
    F[0][1] = y%mod;
    F[1][0] = z%mod;
    F[1][1] = w%mod;
}  // This Code Work in O(logN) Time. Using Matrix Chain Multiplication Approach.


// approach 2
/*
    Time complexity: O(N)
    Space complexity: O(N)

    Where 'N' reprents the "Nth" number .
*/

int fibonacciNumber(int n) {

    const int mod = 1e9 + 7;

    // Create an array to store solution.
    int dp[n + 1];

    dp[0] = 0;
    dp[1] = 1;

    // Iterate i from 2 to N and find ith Fibonacci Number.
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }

    // Return the Nth Fibonacci Number
    return dp[n];
}

// 3rd approach
/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 'N' represents the "Nth" number .
*/

int fibonacciNumber(int n) {
    int mod = (int) 1e9 + 7;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i <= n; i++) {

        // The variable c stores the ith Fibonacci Number.
        c = (a + b) % mod;

        // Updating values of a and b.
        a = b;
        b = c;
    }

    // The variable b stores the nth Fibonacci Number.
    return b;
}

// 4th approach
/*
    Time Complexity: O(log(N)).
    Space Complexity: O(log(N)).

    Where 'N' is the given integer.
*/

// Function to multiply two matrices.
vector<vector<int>> multiply(vector<vector<int>> a,vector<vector<int>> b){

    const int mod = 1e9 + 7;
    
    // To store the resultant matrix.
    vector<vector<int>> c(2,vector<int>(2,0));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                c[i][k] = (c[i][k] + (long long)((long long)a[i][j] * (long long)b[j][k])) % mod;
            }
        }
    }

    return c;
}

// Function to calclate n'th power of a matrix. lefted to understand
vector<vector<int>> matrix_power(vector<vector<int>> coef ,int n){

    // To store the resultant matrix.
    vector<vector<int>> res = {{1,0},{0,1}};

    // While loop till n > 0.
    while(n){
        // If n is odd, multiply res with coef.
        if(n % 2) res = multiply(res,coef);

        // Multiply coef with coef and update n to n/2.
        coef = multiply(coef,coef);
        n /= 2;
    }

    return res;

}


int fibonacciNumber(int n){

    // Declaring the coef matrix.
    vector<vector<int>> coef={{0,1},{1,1}};

    // Calculating the (n-1)th power of the coef matrix.
    vector<vector<int>> res = matrix_power(coef,n-1);

    // Return the bottom right element of the resultant matrix.
    return res[1][1];
}
