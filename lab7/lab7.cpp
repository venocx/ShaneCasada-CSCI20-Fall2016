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

//global variables so every function can use it.
 int x = 99;
 
void forloop(){
    
    for (x; x = 0 ; x--){
    }
    
}
 
void bottleCount(int x, int y){
    
       x = x - y;
 
}

void song(){
    
   
    cout << x << " bottles of beer on the wall, " << x << " bottles of beer. Take one down and pass it around," << x << " bottles of beer on the wall." << endl;
}
 
// I love how clean the main looks. It makes my 💀 all nice and hard.
int main() { 
    
    bottleCount(99, 0);
    song();
   
    return 0;
}



 
