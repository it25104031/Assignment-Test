

#include <stdio.h>
#include <stdlib.h>


//game constants 

#define MIN_SIZE 5
#define MAX_SIZE 15

#define PLAYER_SYMBOL 	'@'
#define WALL_SYMBOL 	'#'
#define INTEL_SYMBOL	'I'
#define LIFE_SYMBOL	'L'
#define EXTRACT_SYMBOL	'X'
#define EMPTY_SYMBOL 	'.' //Empty cell
	
//for player
int row;
int col;
int lives;
int intel_collected;
int active; //1 = active , 0= inactive

//for grid
char **grid	//Dynamically allocated 2D grid
int size	//grid dimention
player p1;
int total_intel;


