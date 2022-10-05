#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    public: int r; int i;
    ComplexNumbers(int a, int b){
        r = a;
        i = b;
    }
    void plus(ComplexNumbers c2){
        r = c2.r + r;
        i = i + c2.i;
    }
    void multiply(ComplexNumbers c2){
        int a  = r, b = i;
        r = r * c2.r - c2.i * i;
        // cross real X real & img. x img.
        i = a * c2.i + c2.r * b;
    }
    void print(){
        cout<<r<<" + i"<<i<<endl;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
