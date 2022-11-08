#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>

void menu();//≤Àµ•¿∏

void init(char cb[ROW][COL],int row,int col);//≥ı ºªØ∆Â≈Ã

void print(char cb[ROW][COL],int row,int col);

void player_move();

void com_play();