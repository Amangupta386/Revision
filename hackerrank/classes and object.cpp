#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student { 
    public: 
    int marks[5];

void input(){
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
}
int calculateTotalScore() { 
    int sum=0; 
    for(int i=0;i<5;i++) { 
        sum=sum+marks[i]; 
    } 
    return sum; 
    } 
};
int main() {
