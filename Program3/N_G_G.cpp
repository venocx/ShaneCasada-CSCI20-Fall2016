/* Created By: 💀Shane Casada💀
 * 10/21/16
 * Time: 11:34 AM
 * Number Guessing Game – The computer will choose a random number between two numbers chosen by the user.
   The user enters a number and is told “higher”, “lower”, or “winner” based on their guess and the computer’s number.  The game should continue until the user guesses the correct number.  
   The program should score the game based on how many guesses it takes to get the number.
 */
            
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class game // created a class called game
{
    
    private: // create a private with int number and int number 2 for my computer to get a number and my player to pick a number. Aswell as player score and computer score
        int number;
        int number2;
        int player_score = 5;
        int computer_score = 0;
    
    
        
    public:
        
        int set_player_guess(int x) // create a function that sets the player guess
        {
            number2 = x;
        }
                
        int get_player_guess() // create a function that gets the player guess and returns it to main
        {
            return number2;
        }
            
        int rand_gen() // create a function that sets the computer random number
        {
            int random_number = 0;
                
            srand(time(0));
            random_number = rand() % 9 + 1;
            return random_number;
    
        }
            
        int pick_gen() // created a function that sets the computer random number 
        {
            int random_number = rand_gen();
            int random_number2 = rand_gen();
                
            if(random_number < random_number2)
            {
                number = random_number;
    
            } 
            else 
            {
                number = random_number2;
            }
        }
            
        int get_pick_gen() // create a function that gets the computer rand number and returns it to main
        {
            return number;
        }
            
        int keeping_score() // create a function that gets the scores from the private and adds and subtracts based on if the guess is true or false
        {
    
            if(player_score != computer_score)
            {
                cout << endl;
                cout << "player: " << --player_score << endl;
                cout << "computer: " << ++computer_score << endl;
                return player_score;
                return computer_score;
            }
        }
        
        string cookie() // create a win function called cookie that gives a player a cookie if they win before there 5 turns are up
        {
             if(get_player_guess() ==  get_pick_gen())
            {
                cout << "You are the best!!!!" << endl;
                cout << "You have won the game!!!" << endl;
                cout << "Here is a cookie!!!!" << endl;
                cout << endl;
                cout << "      " <<  ".:::::::::."     << endl;
                cout << "   " << ".:::::'_|_':::::."   << endl;
                cout << "  " << ":::::' --|-- ':::::"  << endl;
                cout << " " << "::'   .-------.   '::" << endl;
                cout << " " << "::   ( O R E O )   ::" << endl;
                cout << " " << ":::.  `-------'  .:::" << endl;
                cout << "  " << "::::::.......::::::"  << endl;
                cout << "   " <<   "':::::::::::::::'"   << endl;
                cout << "     " <<     "`':::::::::'`"     << endl;
             
                return "";
                
            }
        }
        
        

        
};// end of class game