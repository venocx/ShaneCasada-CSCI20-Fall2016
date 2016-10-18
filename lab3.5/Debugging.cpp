/* Created By: 💀Shane Casada💀
 * 10/18/16
 * 3.5 Lab - Debugging 
    *Choose one of the following programs to debug. You will submit your fixed program and a write up on how you went about debugging the program.  
    In this write up you will discuss what techniques you used to find the bugs and how you debugged them.
    
 * Write a program that reads in a product computation of the following form:  
    N0 * N1 * N2 * N3 * =    and returns the product of the given ints,    
    along with the number of terms in the product.    

 * Note that you don't know how many integer values the user  
    will enter until they enter an equal sign (=).    
    
 *Example:    Please enter a product to be computed, followed by an = sign. 
    : 4 * 56 * 2 * 7 * 4 =    The product of the 5 numbers entered is 12544  
 */

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout << "Enter product like 2 * 3 * 4 = " << endl << ": ";//initialization   
     int product = 1; // 💀You Forgot to add product = to 1; if you don't do this every iteration would equail to 0💀
     int number;
     int numValues = 0;  // counts number of valid numbers entered     
     int number2;
     char oper;        
    
    while (oper != '=') 
    {               // read next pair 
        cin >> number >> oper;
        product = product * number;
        numValues = numValues;
    }        
   
    
    cout << "The product of the " << numValues << " entered is " << product << endl; // counts number of valid numbers entered         
    return 0;
} 