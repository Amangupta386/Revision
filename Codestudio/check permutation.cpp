#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    string s1 = input1;
    string s2 = input2;
    int count = 0;
    if(s1.length() == s2.length()){
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       for(int i = 0; i<s1.length(); i++){
           if(s1[i] == s2[i]){
               count++;
           }
       }
        if(count == s1.length()){
            return 1;
        }
        else{
            return 0;
        }    
    }
    else{
        return false;
    }
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
