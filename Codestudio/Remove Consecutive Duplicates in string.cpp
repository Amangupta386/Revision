#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input){
     for(int i=0;i<input.length();i++){
       if(input[i]==input[i+1]){
           input.erase(input.begin()+i);
           i--;
       }
   }
   return input;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}
