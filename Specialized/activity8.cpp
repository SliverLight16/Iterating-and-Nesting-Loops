#include <iostream>
using namespace std;


   


int FindGCD(int aVal, int bVal) {
   int numA;
   int numB;
   int gcdVal;
   
   numA = aVal;
   numB = bVal;
   
   while (numA != numB) {
      if (numB > numA) {
         numB = numB - numA;
      }
         
      else {
         numA = numA - numB;
      }

   }

   gcdVal = numA;

   return gcdVal;
}

int FindLCM(int aVal, int bVal) {
    int lcmVal;

    lcmVal = abs(aVal * bVal) / FindGCD(aVal, bVal);
   
    return lcmVal;
}

int main () {
    int usrNumA;
    int usrNumB;
    int lcmResult;
   
    cin>> usrNumA >> usrNumB;

    lcmResult = FindLCM(usrNumA, usrNumB);
   
    cout<< "Least common multiple of " << usrNumA << " and " << usrNumB << " is " << lcmResult;

    return 0;
}