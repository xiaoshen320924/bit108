#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define NUM 80
#define MAX 81

void menu();

void init(char arr[ROWS][COLS], int rows, int cols,char ret);

void print(char arr[ROWS][COLS], int row, int col);

void put_bone(char board[ROWS][COLS], int num,int row,int col);

char player_do(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y);

int count(char board[ROWS][COLS], int x, int y);