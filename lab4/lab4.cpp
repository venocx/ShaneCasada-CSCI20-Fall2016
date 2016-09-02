#include <iostream>
using namespace std;

int main() {
   double x;
   int y;
   int numQuarters       = 0;
   int numDimes          = 0;
   int numNickels        = 0;
   int numPennies        = 0;
   double totalCash      = 0.0;
   double afterTaxCash   = 0.0;
   
   cout << "Please give me the amount of coins you have: ";
   cin >> x;
   
   y = x * 100;
  
   numQuarters = y / 25;
   y = y % 25;
   
   numDimes = y / 10;
   y = y % 10;
   
   numNickels = y  / 5;
   y = y % 5;
   
   numPennies = y / 1;
   
   
   totalCash = x;
   
   afterTaxCash =  static_cast<int>(totalCash / .109) * 0.1;

   cout << "Number of quarter is: " << numQuarters                            << endl;
   cout << "Number of Dimes is: "   << numDimes                               << endl;
   cout << "Number of Nickels is: " << numNickels                             << endl;
   cout << "Number of Pennies is: " << numPennies                             << endl;
   cout << "Totlas Cash is: "       << totalCash                              << endl;
   cout << "After the 10.9% fee your total cash amount is: " << afterTaxCash  << endl;
   cout << "Printing cash voucher for " << afterTaxCash                       << endl;
   
   cout << "╔══════════════════════════════════════════╗"                     << endl;
   cout << "║ $               Voucher                $ ║"                     << endl;
   cout << "║               $$$$$$$$$$$                ║"                     << endl;
   cout << "║                $$$$$$$$$                 ║"                     << endl;
   cout << "║                 $MONEY$                  ║"                     << endl;
   cout << "║ $            You Are Rich!!!!          $ ║"                     << endl;
   cout << "╚══════════════════════════════════════════╝"                     << endl;
   
   
   return 0;
}