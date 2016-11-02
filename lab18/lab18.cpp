/* Created By: 💀Shane Casada💀
 * 11/01/16
 * This program is responsible for creating user names for a new website you have created. 
 * It should accept a first name of up to 10 characters and a last name of up to 20 characters.  
 * It should tell the user if the name is larger than the max size.  It should also determine if the names are the same and output a warning. 
 * After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
*/

#include <iostream>
#include <string>

using namespace std;


int main() 
{
    string inputFirst = "";
    string inputLast = "";
    int answer = 0;
    int i = 0;
    
    cout << "Please enter your first name (>= 10 letters)" << endl;
    cin >> inputFirst;
    cout << endl;
    
    if(inputFirst.length() >= 10)
   {
       cout << "You need to enter a first name that is (>= 10 letters)" << endl;
       cout << endl;
       main();
       return 0;
   }
   
    cout << "Please enter your last name (>= 20 letters)" << endl;
    cin >> inputLast;
    
    cout << endl;
    
    if(inputFirst == inputLast)
    {
        cout << "Don't put the same name!!! Who has the same last name as there first. :(";
        cout << endl;
        main();
        return 0;
    }
   
  for (i = 0; i < 1; ++i)
   {
      cout << inputFirst;
   }
   
   cout << " ";
       
   for (i = 0; i < 1; ++i)
   {
      cout << inputLast;
   }
   
   cout << endl;
   
   cout << inputFirst.substr(0, 3) << " " << inputLast.substr() << endl;
   cout << inputFirst << " " << inputLast.substr(0, 3) << endl;
   cout << inputLast.find("asa") << endl;
   
   cout << "How long is the first name and last name?" << endl;
   cin >> answer;
   int addLeng = inputFirst.length() + inputLast.length();
   cout << "The length is " << addLeng << " Your answer was " << answer << endl;
   cout << endl;
  
   if(answer != addLeng)
   {
       cout << endl;
       cout << "Wrong!!!!!" << endl;
   }
   else
   {
       cout << endl;
       cout << "Wow you got it right!" << endl;
   }
   
 
}// end of main
