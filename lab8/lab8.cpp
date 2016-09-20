//💀Shane Casada💀
//9/20/16
//2.3 Lab - Return Values
//Converts pounds to kilograms

/*💀 Create a program that converts pounds to kilograms and kilograms to pounds. */
            
#include <iostream>
#include <string>

using namespace std;

  const double kilograms = 0.453592;
  const double pounds = 2.20462;
  


double toKilo(double x)
{
   double numKilo = x * kilograms;
    
    return numKilo;
}

double toPounds(int x)
{
    double numPounds = x * pounds;
    
    return numPounds;
}

int main() 
{ 
 
  double pounds = 0;
  double kilo = 0;

  cout << "Please enter the amount of kilograms: ";
  cin >> kilo;
    
  cout << "The kilograms in pounds " << toPounds(kilo) << endl;

  
  cout << "Please enter the amount of pounds: ";
  cin >> pounds;
    
  cout << "The amount of pounds in kilograms " << toKilo(pounds) << endl; // taking the input of pounds into the toKilo function do that function and returning that new declared variable back to toKilo.

    
 
    
  
    return 0;
}



 
