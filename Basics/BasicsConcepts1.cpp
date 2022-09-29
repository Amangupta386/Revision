// this keywords
#include<bits/stdc++.h>
using namespace std;

class A{
    int a = 5;
public:
    void setData(int a){
        this -> a = a;
    }
    void getData(){
        cout<<"The value of a: "<<a<<endl;
    }
};
// this is a keyword which is a pointer to the object which invokes the member function 
int main(){
    A a;
    a.setData(4);
    a.getData();
}

// getline(cin, string_name);
        iske sath m hum cin.ignore(); -> bhi use karte hai for removing the back slash n (space)
        because cin to ignore kardeta hai automatically but the woh nai karpaata...
        
        #eg. I/P                O/P     
             2-(here we had space)                                
             hello                 
             ravi               hello
             gupta              ravi
             
// stringstream ss( string_name );
                it use for a read a input for an instance only 
                take the input from variable then given to another diff. data type variable
                
// modulo 10^9+7(10000000007)
https://www.geeksforgeeks.org/modulo-1097-1000000007/

                
                e.g. from int to string
                        int input = 44;
                        stringstream ss;
                        ss<<input; // ------>>>> interacting data
                        string strInput;
                        ss >> strInput //---->>> extracting data
                            
                 e.g. from string to int
                        string number = "44";
                        stringstream ss;  
                        int input;
                        ss >> input; // ------>>>> interacting data
                        cout >> input + 2 <<endl; //---->>>. 46                
                        cout<<number + "2"<<endl;//----->>>442
                
 2nd point.
         int main () {
                std::stringstream ss;
                ss.str ("Example string");
                std::string s = ss.str();       // .str() ->>>  returns a string object with a copy of the current contents of the stream.
                std::cout << s << '\n';          ->>>> Example string 
                return 0;
        }


// OVER FLOW
 -10^9 < int < 10^9
 -10^12 < long int < 10^12
 -10^18 < long long int < 10^18
 
1. if we take :
        int mx = INT_MAX;
        cout<<mx+1; -> -21478=483648 ( i.e, cycle get reversed )
   INT_MIN < int < INT_MAX;

for removing this 
        1. we use long int or long long int
        2. we can use like this long long int ->>>  1LL
        #e.g.1
                int a = 1000000
                int b = 1000000
                long long int c = a * 1LL * b;
                cout<<c; ->> 10000000000
         e.g.2
                double a = 1000000
                double b = 1000000
                double c = a * b;
                cout<<c; ->> 1e+10;
                cout<<fixed(removing scientific value)<<c<<endl; -> 100000000.000000
                cout<<fixed(removing scientific value)<<setprecision(0){it is used for remove after decimal 0's}<<c<<endl;
        
        e.g.3   we don't recommend to use double if not mentioned
                c = 1e24;// 10^24
//                 ideal answer -> 1000000000000000000000
                cout<<fixed<<c<<endl; -> 999999999998 // wrong output in double and float have precision erros we don't recommmend to use...
