// ******************************
// *  Rock - Paper - Scissors   *
// *                            *
// * version 1.3  2-22-2021     *
// * Revised 03/06/2021         *
// * Rick Giannini - RWU        *
// ******************************

#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#define rounds 7 
using namespace std;

int main () {
char ch;
int win= 0;
int tie = 0;
int lose= 0;

do{
int choice;

     cout << " Welcome to Rock Paper Scissors! " << endl;  //The following lines explain the game.
     cout << endl;  // Blank line for aesthetics.
     cout << " The directions are as follows; " << endl;
     cout << endl;   // Blank line for aesthetics.
     cout << " Rock breaks Scissors, Scissors cut Paper, Paper covers Rock. " << endl; // explanation of game...line was moved it was out of sync
     cout << " You will be asked to choose '1' for Rock, '2' for Paper or '3' for Scissors." << endl; // initially I had rps for a choice, changed to 123 game wouldnt function.
     cout << endl;  // Blank line for aesthetics.
	 
	 cin >>choice;
	 
	 int ai = rand() % 3+1; //Creates a random number
	 cout << "The computer has chosen:" << ai << endl;
	 
	 if(choice == 1 && ai == 1){
         cout << "Rock vs rock - tie game!" << endl;
         tie++;
         } else if(choice == 1 && ai == 2){
		 cout << "Paper covers the rock, you lose!" << endl;
		 lose++;
		 } else if(choice == 1 && ai == 3) {
		 cout << "Rock breaks the scissors, you win!" << endl;
		 win++;
		 } else if(choice == 2 && ai == 1){
		 cout << "Paper covers the rock, you win! " << endl;
		 win++;
		 } else if(choice == 2 && ai == 2){
		 cout << "Paper vs paper - tie game!" << endl;
		 tie++;
		 } else if(choice == 2 && ai == 3){
		 cout << "Scissors cut the paper, you lose!" << endl;
		 lose++;
		 } else if(choice == 3 && ai == 1){
		 cout << "Rock breaks the scissors, you lose!" << endl;
		 lose++;
		 } else if(choice == 3 && ai == 2){
		 cout << "Scissors cut the paper, you win!" << endl;
		 win++;
		 } else if(choice == 3 && ai == 3){
		 cout << " Scissors vs scissors, tie game!" << endl;
		 tie++;
		 } else{
		 cout << "I do not understand, please choose 1, 2 or 3" << endl; //correction for invalid input by player
		 }
		 
		 //this will display the game tally for computer and human players
		 
		 cout << "Wins: " << win << endl;
		 cout << "Losses: " << lose << endl;
		 cout << "Tie: " << tie << endl;
		 
		 cout << "Care for a rematch? Y/N" << endl;
		 cin >> ch;
		 }while(ch == 'Y'|| ch == 'y');
		 
		 return 0; 
		 }
		 
		 