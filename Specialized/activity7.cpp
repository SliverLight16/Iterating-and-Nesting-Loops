#include <iostream>
using namespace std;


float EbayFee(float sellPrice) {
   float feeTotal = 0.5;;


   if (sellPrice <= 50.0) {
      feeTotal = feeTotal + (sellPrice*0.13);
   }
      
   else if (sellPrice <= 1000) {
      feeTotal = feeTotal + (50*0.13);
      feeTotal = feeTotal + ((sellPrice - 50) * 0.05);
   }
      
   else {
      feeTotal = feeTotal + (50 * 0.13);
      feeTotal = feeTotal + ((1000 - 50)*0.05);
      feeTotal = feeTotal + ((sellPrice - 1000)*0.02);
   }

    return feeTotal;
}


int main () {
    float sellingPrice;
    cin>> sellingPrice;
   
   cout<< "eBay Fee: $" << EbayFee(sellingPrice);

   return 0;
}