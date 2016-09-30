//💀Shane Casada💀
//9/27/16
//2.4 Lab - Functions and Classes

/*💀 Create a class that converts temperatures between Kelvin, 
    Fahrenheit and Celsius.
    It will always internally store the value in kelvin.
    This class will be run by the provided main.
        */
            
#include <iostream>
#include <string>


using namespace std;

class TemperatureConverter //Makes TemperatureConverter clas
{
    private:
         double kelvin_;
         
         
    public:
          TemperatureConverter() 
            {
                 kelvin_= 0;
            }
            
            TemperatureConverter(double x) 
            {
                 kelvin_ = x;
            }


            
        double  SetTempFromKelvin(double x) 
            {
                kelvin_ = x;
        
            }
            
        double  SetTempFromCelsius(double x) 
            { 
                kelvin_ = x + 273.15;
            }
         
        double  SetTempFromFahrenheit(double x) 
            { 
                kelvin_ = ((5 * (x - 32) / 9) + 273.15);
            }
        
        double  GetTempFromKelvin()
            {
                return kelvin_;
            }
         
        double  GetTempAsCelsius() 
            { 
                return kelvin_ - 273.15;
             }
    
        double  GetTempAsFahrenheit() 
            {
                return (((kelvin_ * 9) / 5 + 32) - 273.15);
            }
       
        double  PrintTemperatures ()
         {
            
            cout << "value as kelvin: " << GetTempFromKelvin() << endl;
            cout << "value as Celsius : " << GetTempAsCelsius() << endl;
            cout << "value as Fahrenheit : " << GetTempAsFahrenheit() << endl;
                
                return kelvin_;
          }
};