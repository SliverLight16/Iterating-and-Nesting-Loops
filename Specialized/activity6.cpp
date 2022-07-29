#include <iostream>
using namespace std;

int main () {
    int currC;
    float equalF;

    currC = 10;

    while (currC <= 40) {
        equalF = (currC*9.0 / 5.0) + 32.0;
        
        cout<< currC << "C is " << equalF << "F\n";
        
        currC = currC + 5;
    }
}