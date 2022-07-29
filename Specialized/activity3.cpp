#include <iostream>
using namespace std;

int main () {
    int currVal;
    int valuesSum;
    int numVals;
    int i;
    float averageVal;

    cin>> numVals;
    i = 0;

    while (i < numVals) {
        cin>> currVal;
        
        valuesSum = valuesSum + currVal;
        
        i = i + 1;
    }
   
    averageVal = (1.0*valuesSum) / numVals;

    cout<< "Average " << averageVal;
}