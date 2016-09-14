//Created By: Shane Casada
//Created On: ?

#include <iostream>
#include <string>

using namespace std;

void money() {
   // Copyright (C) 2016, SMCinc
   cout << "╔══════════════════════════════════════════╗"                     << endl;
   cout << "║ $               Voucher                $ ║"                     << endl;
   cout << "║               $$$$$$$$$$$                ║"                     << endl;
   cout << "║                $$$$$$$$$                 ║"                     << endl;
   cout << "║                 $MONEY$                  ║"                     << endl;
   cout << "║ $            You Are Rich!!!!          $ ║"                     << endl;
   cout << "╚══════════════════════════════════════════╝"                     << endl;
   
   return;
}

void program()
{
   int x;
   int numQuarters    = 0;
   int numDimes       = 0;
   int numNickels     = 0;
   int numPennies     = 0;
   int totalCash      = 0;
   int afterTaxCash   = 0;
   
   cout << "Please give me the amount of coins you have: ";
   cin >> x;
   
  totalCash = x;
  
   numQuarters = x / 25;
   x %= 25;
 
   
   numDimes = (x) / 10;
   x %= 10;
   
   numNickels =  (x) / 5;
   x %= 5;
   
   numPennies = (x) / 1;
   x %= 1;
   

   
   afterTaxCash = totalCash * .891;

   cout << "Number of quarter is: " << numQuarters                            << endl;
   cout << "Number of Dimes is: "   << numDimes                               << endl;
   cout << "Number of Nickels is: " << numNickels                             << endl;
   cout << "Number of Pennies is: " << numPennies                             << endl;
   cout << "Totlas Cash is: "       << totalCash                              << endl;
   cout << "After the 10.9% fee your total cash amount is: " << afterTaxCash  << endl;
   cout << "Printing cash voucher for " << afterTaxCash  << endl;
   
   return;
}

int main() {

   program();
   money();
   return 0;
}