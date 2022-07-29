#include <iostream>
using namespace std;

int main () {
    int maxSoFar;
    int currValue;
    int numValues;
    int i;

    maxSoFar = 0;
    cin>> numValues;
    i = 0;

    while (i < numValues) {
        
        cin>> currValue;
        
        if (i==0) {
            maxSoFar = currValue;
        }
            
        else if (currValue > maxSoFar) {
            maxSoFar = currValue;
        }
            
        i = i+1;
        
    }
   
    cout<< "Max: " << maxSoFar;
      
      
}