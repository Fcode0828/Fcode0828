#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROW][COL], int row, int col);
void SetMine(char mine[ROWS][COLS]);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);