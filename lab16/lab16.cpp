/* Created By: 💀Shane Casada💀
 * 10/25/16
 * 4.2 Lab - Copy your menu program.  Update it so that you include prices for your items and an inventory.  
 As the user purchases an item, add the price to the total and subtract 1 from the inventory.  Output a total cost when they are done shopping.
 */

#include <iostream>
#include <string>

using namespace std;

void pickprogram();

int main() 
{
    int menuNum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string menu[10];
    double price[10];
    int inventory[10] = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    double total;
    int userPick;
    char userIn;
    int i = 0; // Loop index
   

    menu[0] = "[0] Chicken nuggets";   price[0] = 2.50; 
    menu[1] = "[1] Chicken nuggets";   price[1] = 2.50;
    menu[2] = "[2] Chicken nuggets";   price[2] = 2.50;
    menu[3] = "[3] Chicken nuggets";   price[3] = 2.50;
    menu[4] = "[4] Chicken nuggets";   price[4] = 2.50;
    menu[5] = "[5] Chicken nuggets";   price[5] = 2.50;
    menu[6] = "[6] Chicken nuggets";   price[6] = 2.50;
    menu[7] = "[7] Chicken nuggets";   price[7] = 2.50;
    menu[8] = "[8] Chicken nuggets";   price[8] = 2.50;
    menu[9] = "[9] Chicken nuggets";   price[9] = 2.50;
    
    cout << "Here is a lis of items:" << endl;

    for(i = 0; i < 10; ++i)
    {
        cout << menu[i] << "  " <<  "$" << price[i] << endl;
    }

    
  while(userIn != 'q' || userIn != 'Q')
  {
        cout << endl;
        cout << "(To quit press q) Pick a menu number to pick a item" << endl;
        cin >> userIn;
        userPick = userIn - 48;//converts char to int.
        cout << endl;

        if(userPick > 9 || userPick < 0)// if use pickes higher than 10 or user picks lower than 0 or if the cin fails to get a number it does
        {
       
            for(i = 0; i < 10; i++) 
            {
      	        cout << menu[i] << " selected " << menuNum[i] << " times. There are: " << inventory[i] << " left" << endl;
      	        cout << endl;
            }
            cout << "Your total is: " << total;
            return userIn, total;
        }
        else
        {
            menuNum[userPick] += 1;// adds 1 each time the user pickes a number and stores it in menuNum 
            inventory[userPick] -= 1;// subtracts one from the inventory 
            total += price[userPick];
        }
  }// end of while loop  
    
}// end of main
