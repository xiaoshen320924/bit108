#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>

void menu();//�˵���

void init(char cb[ROW][COL],int row,int col);//��ʼ������

void print(char cb[ROW][COL],int row,int col);

void player_move();

void com_play();