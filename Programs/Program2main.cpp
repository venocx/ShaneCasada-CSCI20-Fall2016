/* Created By: 💀Shane Casada💀
 * 9/29/16
 * Program 2 - Functions Main
 * Conversion program for distance (miles, yards, feet and inches).
    
💀 Program2 Main*/

#include<iostream>
#include <string>
#include "Program2.cpp"

using namespace std;

int main ()
{
    double x;
    
    mileconversions mile1; //testing default constructor
    mileconversions mile2(274); //testing overloaded constructor
    
    cout << "This is the default constructor test: ";
    mile1.printDistance ();
    cout << endl;
    
    cout << "This is the overloaded constructor test: ";
    mile2.printDistance ();
    cout << endl;
    cout << endl;
   
    cout << "Please enter the amount of miles you want to convert: " << endl;
    cin >> x;
    cout << endl;
    
    mile1.setYardsFromMiles(x);//testing mutator function
    // cout << mile1.getMile() << endl;//testing accessor function
    cout <<  x << " miles is : ";
    mile1.printDistance();
    cout << " yards " << endl;
    
    mile1.setFeetFromMiles(x); //testing other functions
    // // cout<<mile2.getFeetFromMiles()<<endl;
    cout << x << " miles is : ";
    mile1.printDistance2();
    cout << " feet " << endl;
    
    mile1.setIncFromMiles(x);
    // // cout<<mile2.getIncFromMiles()<<endl;
    cout << x << " miles is : ";
    mile1.printDistance3();
    cout << " inches " << endl;
    
    return 0;
}