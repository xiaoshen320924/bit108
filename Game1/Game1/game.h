#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu();//�˵���

void init(char cb[ROW][COL],int row,int col);//��ʼ������

void print(char cb[ROW][COL], int row, int col);//��ӡ����

void player_move(char cb[ROW][COL], int row, int col);//����ƶ�����

void com_move(char cb[ROW][COL], int row, int col);//�����ƶ�����

char result(char cb[ROW][COL], int row, int col);


