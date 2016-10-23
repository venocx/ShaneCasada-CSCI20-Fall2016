/* Created By: 💀Shane Casada💀
 * 10/21/16
 * Time: 11:34 AM
 * Number Guessing Game – The computer will choose a random number between two numbers chosen by the user.
   The user enters a number and is told “higher”, “lower”, or “winner” based on their guess and the computer’s number.  The game should continue until the user guesses the correct number.  
   The program should score the game based on how many guesses it takes to get the number.
 */
 
#include<iostream>
#include <string>
#include "N_G_G.cpp" // includes information from the class function game

using namespace std;

void guess_game(); // initializes the function guess game
void play_again(); // initializes the function play game

game guess_num; // initializes the object guess num from class game 



int main ()
{
    string oper = "";
    
    cout << "Would you like to play computer number guessing game? (Yes, No)" << endl;
    cin >> oper;
    cout << endl;
        
        // create an if else if statment for lower case and upper case yes and no
        if(oper == "Yes" || oper == "yes")
        {
            guess_game();
        }
        else if(oper == "no" || oper == "No")
        {
            cout << endl;
            cout << "Sorry to see you go 💀Butt💀 love to watch you leave 💀" << endl;
            cout << "\n";
            abort(); // aborts the whole program
        }
        else if(oper != "Yes" || oper != "yes" || oper != "no" || oper != "No") //create an else if that does not allow anything else but yes or no
        {
            cout << "Please Pick Yes or No" << endl;
            cout << endl;
            main();
        }
  
}// End of main

void guess_game() // create a guess game function that tells the player how to play and allows them to play
{
    int number2;
    char pick;
    int player_score = 5;
    int computer_score = 0;

    cout << "Great!" << endl;
    cout << endl;
    
    cout << "Your Score: " << player_score << endl;
    cout << "Computer Score: " << computer_score << endl;
    cout << endl;
    
    cout << "The first guess is free" << endl;
    cout << "You have 5 chances to pick the number good luck" << endl;
    cout << endl;
    
    cout << "Computer is picking a random number between 1-10." << endl;
    guess_num.pick_gen();
    cout << endl;

    // cout << guess_num.get_pick_gen() << endl; // Was used for debugging*/
    // cout << endl;
    
    cout << "Pick a number between 1-10" << endl;
    cin >> number2;
    guess_num.set_player_guess(number2);
    cout << endl;
    
        
    while(guess_num.get_player_guess() != guess_num.get_pick_gen()) // create a while loop that if player does not pick number to do stuff
        {

            if(guess_num.get_player_guess() > 10 || guess_num.get_player_guess() <= 0) // create a if else if that alows the number not to be grated than 10 or less than 0. Aswell as high and low inputs
            {
                cout << "Your Number is not in the 1-10 please pick a number between 1-10" << endl;
                cin >> number2;
                guess_num.set_player_guess(number2);
                cout << endl;
            }
            else if(player_score == 0)
            {
                cout << "You have lost!!! :(" << endl;
                player_score = 5;
                cout << endl;
                play_again();
            }
            else if(guess_num.get_player_guess() >= guess_num.get_pick_gen())
            {
                cout << endl;
                cout << "Your guess is to high pick a lower number than " << guess_num.get_player_guess() << endl;
                cin >> number2;
                cout << endl;
                guess_num.set_player_guess(number2);
                guess_num.keeping_score();
                cout << endl;
            }
            else 
            {
                cout << endl;
                cout << "Your guess is to low pick a higher number than " << guess_num.get_player_guess() << endl;
                cin >> number2;
                guess_num.set_player_guess(number2);
                guess_num.keeping_score();
                cout << endl;
            }
        }//end of while loop
        
    play_again(); // calls the play again function to play again
    
}//end guess_game funcion

void play_again() // create a play again function that allows the player to pick if they want to play again
{
    string oper = "";
    
        if(guess_num.get_player_guess() ==  guess_num.get_pick_gen())
        {
            guess_num.cookie();
            cout << endl;
        }
        
    cout << "Would you like to play again? (Yes, No)" << endl;
    cin >> oper;
    cout << endl;
    
      
        if(oper == "Yes" || oper == "yes")
        {
            guess_game();
   
        }
        else if(oper == "no" || oper == "No")
        {
            cout << endl;
            cout << "Sorry to see you go 💀Butt💀 love to watch you leave." << endl;
            cout << "\n";
            abort();
        }
        else if(oper != "Yes" || oper != "yes" || oper != "no" || oper != "No")
        {
            cout << "Please Pick Yes or No" << endl;
        }
}//end play_again function
