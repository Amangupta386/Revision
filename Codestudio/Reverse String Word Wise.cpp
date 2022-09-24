#include <iostream>
using namespace std;
string reverseStringWordWise(string input){

      int end = input.length() - 1, start, j;
       string result ="", word = "";
      // for last to till 2nd part
       for(int i= input.length() - 1; i >= 0; i--) {
           if(input[i] == ' ') {
               start = i + 1;
               word = "";
               for(j = start;j <= end;j++) {
                   word += input[j];
               }
               end  = i - 1;
               result = result + word + " ";
           }
       }
      // for 1st part
       word = "";
       for(j = 0;j <= end;j++) {
           word = word + input[j];
       }
       result += word;
       return result;
}
int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
