#include <iostream>
using namespace std;

int main () {
    float intialSavings;
    float interestRate;
    float currSavings;
    int i;

    cin>> intialSavings;
    cin>> interestRate;

    cout<< "Annual savings for 10 years \n";

    currSavings = intialSavings;
    i = 0;

    while (i < 10) {
        cout<< "$" << currSavings << "\n";
   
        currSavings = currSavings + (currSavings *interestRate);
        i = i+1;
    }
   

}