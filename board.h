#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include "ships.h"

typedef struct _Board{
    int **board;
    int rowSize;
    int colSize;
} Board;



Board* newBoard(int row, int col);
void clearBoard(Board* b);

Board* tiro(Board *pl1, Board *pl2 , Coordinate shot);

void randomPlaceShips(Board *b);
bool setShipPos(Board *b, Ship ship);

bool isValidPos(Board* b, Ship ship);

void printBoard(Board* b);