/* Created By: 💀Shane Casada💀
 * 11/17/16
 * Program 5 (Tic Tac Toe)
 * This program will allow two players to play Tic Tac Toe or for a player to play a cpu
*/

#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include <stdio.h>

using namespace std;


char square[10] = {'o','1','2','3','4','5','6','7','8','9'}; // made an array of 10 for 9 spots

int checkwin();
void board();
void choice();
void game();
void easy_cpu_game();
void hard_cpu_game();

int main() // takes the player to the choice function
{
	choice();
}

int checkwin() // makes a if else if statements  to check if the player or cpu gets 3 in a row
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

void board() // the board is made out of couts and some manipulation of words to make it aesthetically pleasing
{
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

void choice() // the choice to play with a cpu or two players
{
		int player; 
		char y;
		
		cout << "Would you like to play with a computer? (Y,N)" << endl;
		cin >> y; 
			
		if(y == 'Y' || y == 'y')
		{
			cout << endl;
			cout << "Great!" << endl;
			cout << endl;
		
				cout << "Pick a lvl of the computer: E = Easy, H = Hard" << endl; //the ability to choose between hard and easy mode for cpu
				cin >> y;
				if( y == 'e' || y == 'E')
				{
					easy_cpu_game(); // calls the easy function
				}
				else
				{
					hard_cpu_game(); // calls the hard function
				}
		}
		else
		{
			game(); // if the plyer wants to play with a person  
		}
}

void game() // main fun with PvP 
{
	int player = 1,i,choice;

	char mark, x;
	
	do
	{
		board(); // calls board function
		player=(player%2)?1:2; // creats a modulo for player to pick what player is what

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice; // stores player choice in choice

		mark = (player == 1) ? 'X' : 'O'; //initializes what player mark is one player and two players
		
		/* if else statements to marking the squares on the game board*/
		if (choice == 1 && square[1] == '1') 

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move "; // invalid move and re submit section

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin(); // checks i to see if the which player has won from the checkwin function

		player++; // adds one to player to go to the next player
	}while(i==-1); //create a while function that check if one player has won or not
	board(); //calls board function  to show player win
	if(i==1) //creates a if else to show what player has won or lost or a draw

		cout<<"==> Player "<<--player<<" win ";
	else
		cout<<"==> Game draw";

	cin.ignore();
	cin.get();
}

void easy_cpu_game() // most of the same stuff from game but some added rand for cpu
{
		int player = 1,i,choice;
	
		char mark, x;
		
		do
		{
			board();
			player = (player%2)?1:2;
			mark = (player == 1) ? 'X' : 'O';
	
			if(player == 1){
			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;
			}
	
			else{ // creates a else statment for the cpu to chose a rand number from 1-9 and saves it in choice for the cpu's turn
				srand (time(NULL));
				choice = rand() % 9 + 1;
			}
			
			if (choice == 1 && square[1] == '1')
	
				square[1] = mark;
			else if (choice == 2 && square[2] == '2')
	
				square[2] = mark;
			else if (choice == 3 && square[3] == '3')
	
				square[3] = mark;
			else if (choice == 4 && square[4] == '4')
	
				square[4] = mark;
			else if (choice == 5 && square[5] == '5')
	
				square[5] = mark;
			else if (choice == 6 && square[6] == '6')
	
				square[6] = mark;
			else if (choice == 7 && square[7] == '7')
	
				square[7] = mark;
			else if (choice == 8 && square[8] == '8')
	
				square[8] = mark;
			else if (choice == 9 && square[9] == '9')
	
				square[9] = mark;
			else
			{
				cout <<"Invalid move ";
	
				player--;
				cin.ignore();
				cin.get();
				choice = 0;
			}
			
			i = checkwin();
	
			player++;
			
		}
		while(i==-1);
		board();
		if(i==1)
	
			cout<<"==> Player "<<--player<<" win ";
		else
			cout<<"==> Game draw";
	
		cin.ignore();
		cin.get();
	}
	
void hard_cpu_game()// most of the same stuff from the game function but no more rando number for cpu just hard coded to get a 75% draw ratio
{
	int player = 1,i,choice;
	
		char mark, x;
		
		do
		{
			board();
			player = (player%2)?1:2;
			mark = (player == 1) ? 'X' : 'O';
	
			if(player == 1)
			{
				cout << "Player " << player << ", enter a number:  ";
				cin >> choice;
			}
			else{
				
				 	 if (square[1] && square[2] == 'X' && square[3] != 'O' && square[3] != 'X'){
						square[3] = mark;
						player++;
				}
				else if (square[5] == 'X' && square[3] != 'O' && square[3] != 'X'){
						square[3] = mark;
						player++;
				}
				else if (square[2] && square[3] == 'X' && square[1] != '0' && square[1] != 'X'){
						square[1] = mark;
						player++;
				}
				else if (square[1] && square[3] == 'X' && square[2] != '0' && square[2] != 'X'){
						square[2] = mark;
						player++;
				}
				else if (square[4] && square[5] == 'X' && square[6] != 'O' && square[6] != 'X'){
						square[6] = mark;
						player++;
				}
				else if (square[5] && square[6] == 'X' && square[4] != 'O' && square[4] != 'X'){
						square[4] = mark;
						player++;
				}
				else if (square[4] && square[6] == 'X' && square[5] != 'O' && square[5] != 'X'){
						square[5] = mark;
						player++;
				}
				else if (square[7] && square[8] == 'X' && square[9] != 'O' && square[9] != 'X'){
						square[9] = mark;
						player++;
				}
				else if (square[8] && square[9] == 'X' && square[7] != 'O' && square[7] != 'X'){
						square[7] = mark;
						player++;
				}
				else if (square[7] && square[9] == 'X' && square[8] != 'O' && square[8] != 'X'){
						square[8] = mark;
						player++;
				}
				else if (square[1] && square[4] == 'X' && square[7] != 'O' && square[7] != 'X'){
						square[7] = mark;
						player++;
				}
				else if (square[7] && square[4] == 'X' && square[1] != 'O' && square[1] != 'X'){
						square[1] = mark;
						player++;
				}
				else if (square[2] && square[5] == 'X' && square[8] != 'O' && square[8] != 'X'){
						square[8] = mark;
						player++;
				}
				else if (square[5] && square[8] == 'X' && square[2] != 'O' && square[2] != 'X'){
						square[2] = mark;
						player++;
				}
				else if (square[1] && square[5] == 'X' && square[9] != 'O' && square[9] != 'X'){
						square[9] = mark;
						player++;
				}
				else if (square[9] && square[5] == 'X' && square[1] != '0' && square[1] != 'X'){
						square[1] = mark;
						player++;
				}
				else if (square[3] && square[5] == 'X' && square[7] != 'O' && square[7] != 'X'){
						square[7] = mark;
						player++;
				}
				else if (square[7] && square[5] == 'X' && square[3] != 'O' && square[3] != 'X'){
						square[3] = mark;
						player++;
				}
				else if (square[1] == 'X' && square[9] != 'O' && square[9] != 'X'){
						square[9] = mark;
						player++;
				}
				else if (square[3] == 'X' && square[5] != 'O' && square[7] != 'X' && square[5] != 'X'){
						square[7] = mark;
						player++;
				}
				else{}
			}
			
			if (choice == 1 && square[1] == '1')
	
				square[1] = mark;
			else if (choice == 2 && square[2] == '2')
	
				square[2] = mark;
			else if (choice == 3 && square[3] == '3')
	
				square[3] = mark;
			else if (choice == 4 && square[4] == '4')
	
				square[4] = mark;
			else if (choice == 5 && square[5] == '5')
	
				square[5] = mark;
			else if (choice == 6 && square[6] == '6')
	
				square[6] = mark;
			else if (choice == 7 && square[7] == '7')
	
				square[7] = mark;
			else if (choice == 8 && square[8] == '8')
	
				square[8] = mark;
			else if (choice == 9 && square[9] == '9')
	
				square[9] = mark;
			else
			{
				cout <<"Invalid move ";
				player--;
				cin.get();
			}
			
			i = checkwin();
			player++;
			
		}
		while(i==-1);
		board();
		if(i==1){
			cout<<"==> Player "<<--player<<" win ";
		}
		else{
			cout<<"==> Game draw";
		}
}