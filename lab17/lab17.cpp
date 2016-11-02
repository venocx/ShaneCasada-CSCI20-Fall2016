/* Created By: 💀Shane Casada💀
 * 11/01/16
 * This program is responsible for creating user names for a new website you have created. 
 * It should accept a first name of up to 10 characters and a last name of up to 20 characters.  
 * It should tell the user if the name is larger than the max size.  It should also determine if the names are the same and output a warning.
 * After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
 */

#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
   int max_First = 11;
   int max_Last = 21;
   char inputFirst[max_First];
   char inputLast[max_Last];
   int i = 0;

   cout << "Please enter your first name (>= 10 letters)" << endl;
   cin >> inputFirst;

   if(max_First < (signed char)10)
   {
      cout << endl;
      cout << "You entered more than 10 letters" << endl;
      main();
   }
   
   cout << endl;
   
   cout << "Please enter your last name (>= 20 letters)" << endl;
   cin >> inputLast;
   
   cout << endl;
   
   if(inputFirst == inputLast)
   {
      cout << "You intred the same name" << endl;
      cout << "Restart" << endl;
      main();
   }
   for (i = 0; inputFirst[i] != '\0'; ++i)
   {
      cout << inputFirst[i];
   }
   
   cout << " ";
       
   for (i = 0; inputLast[i] != '\0'; ++i)
   {
      cout << inputLast[i];
   }
   
   cout << endl;
   
   cout << strncat(inputFirst, inputLast, 4) << endl;
   cout << endl;
   cout << strncat(inputFirst, inputLast, 2) << endl;
}// end of main
