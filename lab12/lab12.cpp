/* Created By: 💀Shane Casada💀
 * 10/4/16
 * 3.3 Lab - Nested If and Switch Case 
 * Create a getting to know you flowchart similar to the “What animal are you?” one we did in class.
 */


#include <iostream>
#include <string>


using namespace std;

char guess(char x) // created a guess and check if/else statemsnts
{
    cout << "Great" << endl;
    cout << "First Question" << endl <<
    "Do you like the outdoors?" << endl;
   
    switch(x)
        case 't':
        case 'f':
        case 'T':
        case 'F':
        case 'y':
        case 'Y':
        case 'n':
        case 'N':
        cin >> x;
        cout << endl;
        
        
if(x == 't' || x == 'T' || x == 'y' || x == 'Y')
    {
        cout << "Great" << endl <<
        "Next Question" << endl <<
        "Do you like to run?"<< endl;
        cin >> x;
      
    
        if(x == 't' || x == 'T' || x == 'y' || x == 'Y')
        {
            cout << "Great" << endl; 
            cout << "I know what you are!!!" <<
            "Are you a horse!" << endl; 
            cout << endl;
        }
        else if (x == 'f' || x == 'F' || x == 'n' || x == 'N')
        {
            cout << "Great" << endl; 
            cout << "I know what you are!!!" <<
            "Are you a turtle!" << endl; 
            cout << endl;
        }
    
    }
else if(x == 'f' || x == 'F' || x == 'n' || x == 'N')
    {
        cout << "Great" << endl <<
        "Next Question " <<
        "Do you like cheese?" << endl;
        cin >> x;
        
        if(x == 't' || x == 'T' || x == 'y' || x == 'Y')
        {
            cout << "Great" << endl; 
            cout << "I know what you are!!!" <<
            "Are you a mouse!" << endl; 
            cout << endl;
        }
        else if(x == 'f' || x == 'F' || x == 'n' || x == 'N')
        {
            cout << "Great" << endl <<
            "Next Question" <<
            "Do you like to swim?"<< endl;
            cin >> x;
            cout << endl;
        }
        else if(x == 't' || x == 'T' || x == 'y' || x == 'Y')
        {
            cout << "Great" << endl; 
            cout << "I know what you are!!!" <<
            "Are you a fish!" << endl; 
            cout << endl;
        }
    else
        {
            cout << "Great" << endl; 
            cout << "I know what you are!!!" <<
            "Are you a cat!" << endl; 
            cout << endl;
        }
    }
        
 }  

int main ()
{
    char animalName = '?';
    char answer = '?';
    
    cout << "Would you like to play 20 questions? (Y/N)" << endl;
    cin >> answer;
    
    switch(answer)// created a switch statment that lets me pick yes or no if I wanted to play
        {
           
            case 'y':
            case 'Y':
            cout << "Great letts play" << endl;
            cout << endl;
            break;
            
            
            case 'n':
            case 'N':
            cout << "Well than..." << endl;
            cout << endl;
            
            abort(); 
           
        }
        
    cout << "What kind of animal are you?" << endl; // alowed the animals to be picked
    cout << endl;
    cout << "Your can pick from: " << endl;
    cout << endl;
    cout << "H-Horse, T- Turtle, M-Mouse, F-Fish, and C-Cat." << endl;
    cin >> animalName;
    cout << endl;
    
        switch(animalName)// created the ability to add upper case and lower case for the pick of an animal
        {
            case 'H':
            case 'h':
            cout << "You picked a Horse" << endl;
            cout << endl;
            break;
            
            case 'T':
            case 't':
            cout << "You picked a Turtle"<< endl;
            cout << endl;
            break;
            
            case 'M':
            case 'm':
            cout << "You picked a Mouse" << endl;
            cout << endl;
            break;
            
            case 'F':
            case 'f':
            cout << "You picked a Fish" << endl;
            cout << endl;
            break;
            
            case 'C':
            case 'c':
            cout << "You picked a Cat" << endl;
            cout << endl;
            break;
 
        }
    
    guess(answer);

}