// Gold_Team Battleship Game pt.1

// - Include all necessary libraries 
#include <iostream>
#include <iomanip>

using namespace std;

const int BOARDSIZE = 10;

// Define a struct for a battleship

struct NavalShips {
	int aircraftCarrier;
	int battleShip;
	int destroyer;
	int patrolBoat;
	int submarine;
};

enum DIRECTION {UP, DOWN, LEFT, RIGHT};
struct ShipSize {
    DIRECTION direction;
    int length;
};

struct ShipPosition {
  int x; 
  int y;    
};

// This function will generate a 10x10 board
// ocean = ~
// part of the ship = #
//Pre: Generate a 2d array to represent the board
//Post: 10x10 game board is created
void CreateBoard(int board[][BOARDSIZE]);

// This function will randomly place ships on the computer generated board
// Pre: A board for the computer has been generated
// Post: The 5 ships are randomly positioned
void GenerateShips();

// This function will generate and display board for the player (user)
// Pre: Generate a 2d array to represent the board
// Post: An identical board is printed, but hides the ship
void UserBoard();

// This function allows player to guess the position of the NavalShips
// Pre: A 10x10 board has been created
// Post: A 'H' or '.' will be placed in the position the player guessed,
//      depending on if they hit or missed
void GuessPosition();

// This function will compare the computer's board and the user's board
// Pre: Both boards have been created
// Post: Once all ships are sunk, the game will end 
void CompareBoards();

int main () {
    
    // call CreateBoard function
    
    // call GenerateShip function
    
    // call UserBoard function
    
    // call GuessPosition function
    
    // call CompareBoards function
    
return 0;
}