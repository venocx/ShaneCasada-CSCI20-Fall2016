//💀Shane Casada💀
//9/15/16
//2.2 Lab - Parameters and Arguments
//Song

/*💀 Create a program to display a song of your choice that uses functions with parameters and arguments.\
    Requirements:
        Must have at least 2 functions
        Must have 2 parameters
        */
            
#include <iostream>
#include <string>

using namespace std;



 
int min_bottle(int x)
{
    
    x--;
       
    return x;
    
}


string nothing(string y, string z)
{
    return y, z;
}
 

int main() 
{
    string z = " ";
    string y = " ";
    
for(int x = 100; x >= 2; x--)
  {
      cout << min_bottle(x) <<" bottles of beer on the wall, " << min_bottle(x) << " bottles of beer. Take one down and pass it around, " << (min_bottle(x)-1) << " bottles of beer on the wall." << nothing(y, z) << endl;
  }
    
  
   
    return 0;
}



 
