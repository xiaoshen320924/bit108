#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʾ���û�չʾ���С�����
#define ROW 9
#define COL 9
//��ʾ�����ʵ����Ҫ���С�����
#define ROWS ROW+2
#define COLS COL+2
//NUM��ʾ��������MAX��ʾ���̹�ģ
#define NUM 10
#define MAX 81

//��ӡ�˵�
void menu();

//��ʼ������
void init(char arr[ROWS][COLS], int rows, int cols,char ret);

//��ӡ����
void print(char arr[ROWS][COLS], int row, int col);

//������õ���
void put_bone(char board[ROWS][COLS], int num,int row,int col);

//���ɨ��
char player_do(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y);

//ͳ������������Χ������
int count(char board[ROWS][COLS], int x, int y);

//���׹��ܣ�չ��һƬ��������
void unfold(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y, char r);


//��ϸ��Ϣ��ӭ�鿴���ͣ�https://blog.csdn.net/MengYang_/article/details/127752136?spm=1001.2014.3001.5501