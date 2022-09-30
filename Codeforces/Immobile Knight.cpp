#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x == 1 | y == 1 ){
            cout<< x << " "<< y << endl;
        }
        else if(x<=3 & y<= 3){
            cout << ceil((double)x/2.0) << " " << ceil((double)y/2.0) << endl;
        }
        else
            cout << x << " " << y << endl;
        
    }
    return 0;
}
