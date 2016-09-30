//💀Shane Casada💀
//9/29/16
//Program 2 - Functions
//Conversion program for distance (miles, yards, feet and inches).

/*💀 Create a program that converts pounds to kilograms and kilograms to pounds. */
            
#include <iostream>
#include <string>

using namespace std;

class mileconversions //Create a class 
    {

private:
    double mile;
         
         
public: 
    
    mileconversions()//Make a Default constructor in public
        {
            mile = 0;
        }
            
    mileconversions(double x)
        {
		    mile = x;
        }
    
        
    double setYardsFromMiles(double x)
	    {
            mile = x * 1760.0;
        }       
            
    double setFeetFromMiles(double x)
    	{
	        
	    	mile = x * 5280.0;
    	}
         
    double setIncFromMiles(double x)
    	{
	        mile = x * 63360;
        }
        
    double  getYardsFromMiles() 
        { 
             return mile;
        }

         
    double  getFeetFromMiles() 
        { 
            return mile;
        }
    
    double  getIncFromMiles() 
        {
            return mile;
        }
       
    int  printDistance()
        {

            cout << getYardsFromMiles();
        
            return mile;
        }
        
    int printDistance2()
        {
            cout << getFeetFromMiles();
        
            return mile;
        }
        
    int printDistance3()
        {
            cout << getIncFromMiles();
            
            return mile;
        }
        
};
