#include <iostream>
using namespace std;

int main () {
    int userNum;
    int curPower;

    curPower = 2;
    cin>> userNum;

    while (userNum == 1) {
        cout<< curPower << "\n";
        curPower = curPower*2;
        cin>> userNum;
}

    cout<< "Done.";
}