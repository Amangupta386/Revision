// print the sum of odd and even places seperately
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int m=n;
    int even =0 , odd = 0;
    int i = 1;
    int ten = 10;
    while(n>0){
        m = n % ten;
        
        if(i%2==0){
            even = even + m;     
        } 
        else{
            odd = odd + m;
        }
        i++;
        n=n/10;
    }
    cout<< odd <<" "<< even;

    return 0;
}
