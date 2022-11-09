#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu();//菜单栏

void init(char cb[ROW][COL],int row,int col);//初始化棋盘

void print(char cb[ROW][COL], int row, int col);//打印棋盘

void player_move(char cb[ROW][COL], int row, int col);//玩家移动棋子

void com_move(char cb[ROW][COL], int row, int col);//电脑移动棋子

char result(char cb[ROW][COL], int row, int col);


