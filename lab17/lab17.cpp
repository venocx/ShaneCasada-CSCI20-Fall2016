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
   int z = 0;
   int num_firts;
   int num_last;

   cout << "Please enter your first name (10 letters or less)" << endl;
   cin >> inputFirst;
   
   for(i = 0; inputFirst[i] != '\0'; ++i)
   {
      num_firts = i;
   }

   if(num_firts > 10)
   {
      cout << endl;
      cout << "You entered more than 10 letters" << endl;
      main();
   }
   
   cout << endl;

   
   cout << "Please enter your last name (>= 20 letters)" << endl;
   cin >> inputLast;
   
   // for(int z = 0; inputLast[i] != '\0'; ++z)
   // {
   //    num_last = i;
   // }
   
   cout << endl;
   
   if(num_last > 20)
   {
      cout << "You entered the same name" << endl;
      cout << "Restart" << endl;
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
