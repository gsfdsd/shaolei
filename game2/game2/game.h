#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>
#include  <stdlib.h>
#include  <time.h>
void InitBoard(char board[ROWS][COLS],int row ,int col,char ret);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetBoard(char board[ROWS][COLS], int row, int col);
void ShowBoard(char mine[ROWS][COLS],char  show[ROWS][COLS], int row,int col);