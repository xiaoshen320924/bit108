#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//表示向用户展示的列、行数
#define ROW 9
#define COL 9
//表示设计中实际需要的行、列数
#define ROWS ROW+2
#define COLS COL+2
//NUM表示地雷数，MAX表示棋盘规模
#define NUM 10
#define MAX 81

//打印菜单
void menu();

//初始化棋盘
void init(char arr[ROWS][COLS], int rows, int cols,char ret);

//打印棋盘
void print(char arr[ROWS][COLS], int row, int col);

//随机放置地雷
void put_bone(char board[ROWS][COLS], int num,int row,int col);

//玩家扫雷
char player_do(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y);

//统计无雷区域周围地雷数
int count(char board[ROWS][COLS], int x, int y);

//进阶功能，展开一片无雷区域
void unfold(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y, char r);


//详细信息欢迎查看博客：https://blog.csdn.net/MengYang_/article/details/127752136?spm=1001.2014.3001.5501