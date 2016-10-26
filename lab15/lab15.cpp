/* Created By: 💀Shane Casada💀
 * 10/25/16
 * 4.1 Lab - Single Dimensional Arrays 
    Create a menu program.  Your menu must have 10 different items for the user to choose from. 
    The program should allow the user to choose an item until they say they are done. 
 */

#include <iostream>
#include <string>

using namespace std;

void pickprogram();

int main() 
{
    int menuNum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string menu[10];
    int userPick;
    char userIn = '0';
    char quit = '?';
    int i = 0; // Loop index
   

    menu[0] = "[0] Chicken nuggets";
    menu[1] = "[1] Chicken nuggets";
    menu[2] = "[2] Chicken nuggets";
    menu[3] = "[3] Chicken nuggets";
    menu[4] = "[4] Chicken nuggets";
    menu[5] = "[5] Chicken nuggets";
    menu[6] = "[6] Chicken nuggets";
    menu[7] = "[7] Chicken nuggets";
    menu[8] = "[8] Chicken nuggets";
    menu[9] = "[9] Chicken nuggets";
    
    cout << "Here is a lis of items:" << endl;

    for(i = 0; i < 10; ++i)
    {
        cout << menu[i] << endl;
    }
    
  while(quit != 'n' || quit != 'N')
  {
        cout << endl;
        cout << "Pick a menu number to pick a item: (To quit press q)" << endl;
        cin >> userPick;
        menuNum[userPick] += 1;// adds 1 each time the user pickes a number and stores it in menuNum 

        if(userPick > 9 || userPick < 0 || cin.fail())// if use pickes higher than 10 or user picks lower than 0 or if the cin failt to get a number it does
        {
        cin.clear();// clears the cin
        cin.ignore();// ignores the cin
        cout << endl;
        cout << "Would you like to quit? (Y or N)" << endl;
        cin >> quit;
        cout << endl;
        
            if(quit == 'y' || quit == 'Y')
            {
                  
                for(i = 0; i < 10; i++) 
                {
      	            cout << /* menu[i] <<*/ " selected " << menuNum[i] << " times." << endl;
                } 
                abort();
            }// end of quit if statment
            else
            {
                main();
            }
        }// end if 
  }// end of while loop  
    return 0;
}// end of main
