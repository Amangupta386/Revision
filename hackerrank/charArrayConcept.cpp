#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int max = 0;
    char result;
    string j = "h";
    int count[26] = {0};
    for(int i = 0; i<s.length(); i++){
        cout<<"Before Updating : "<<s[i]<<" the count was : "<<count[s[i] - 'a']<<endl;
        count[s[i]-'a']++;
        cout<<"After Updating : "<<s[i]<<" the count is : "<<count[s[i] - 'a']<<endl;
    }

    cout<<endl;
    return 0;
}
