/* Created By: 💀Shane Casada💀
 * 11/15/16
 * Take the following code and comment it to demonstrate that you understand what it is doing.
*/

#include <iostream> // includes the ipstream 
#include <cstring> // includes the cstring 
using namespace std; // includes the std 
 
int main() // your porgram main function
{
                char firststr[10]; // creates a char array called firststr of 9
                int firstname = 0; // creates a int first name  
                char *head = firststr; // created a pointer head that is = to firststr
                char *tail = firststr; // created a pointer tail that is = firststr
                cout << "Please enter a 10 letter word or less" << endl; // created a output to ask pearson for a 10 letter word    
                cin >> firststr; //inputs pearsons letter into firststr array
                strlen(firststr);
                firstname = strlen(firststr); // grabs the lengh of firstname
                cout << "Your word is " << firststr << endl; // outpust the word the pearson put in
                if (firstname<10) // creates a if statment that says if the firstname leangth is smaller than 10 do
                {
                                while (*head != '\0') //does a while loop that says if the pointer head does not reach the naul char
                                {
                                                cout << *head; // couts head 
                                                head++; // and adds one to head each time to go through the array
                                }
                }
                else // else for the for loop
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // pust a warning word that the word is to big
                }
                cout << endl; // puts a space in between code lines
                tail = &firststr[strlen(firststr) - 1]; // storing the user input lengsh subtracting 1 so it can be sue in an if statment and gets the info from the input mem slot tail
                if (firstname < 10) // if the firstname is less than 10
                {
                                while (*tail>0) // while pointer tail is more than 0
                                {
                                                cout << *tail; //it ouptus tail each time
                                                tail--; // and subtracts 1 to keep going
                                }//end of while loop
                } // end of if 
                cout << endl; //puts a space in between code lines 
                head = firststr; // stores the changed pearsons input into head
                tail = &firststr[strlen(firststr) - 1];// storing the user input lengsh subtracting 1 so it can be sue in an if statment and gets the info from the input mem slot tail

                if (*head == *tail) // compairs the pointer head with the pointer tail to see if they are the same
                {
                                cout << "It is a palindrome!" << endl; // out puts is "an"!!! no longer "a" and out puts if pinter head and tail are the same
                }
                else
                {
                                cout << "It is not an palindrome" << endl;// out put if it is not the same
                }
 
                return 0; // clears everthing
}