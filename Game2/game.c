#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("***********************************\n");
	printf("*******      1°¢play       ********\n");
	printf("*******      0°¢exit       ********\n");
	printf("***********************************\n");
}

void init(char arr[ROWS][COLS], int rows, int cols,char ret)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = ret;
		}
	}
}

void print(char arr[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void put_bone(char board[ROWS][COLS], int num,int row,int col)
{
	while (num>0)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] != '1')
		{
			board[i][j] = '1';
			num--;			
		}
	}
}

int count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

char player_do(char board[ROWS][COLS], char bone[ROWS][COLS], int x, int y)
{
	if (board[x][y] == '1')
	{
		printf("∫‹“≈∫∂£¨ƒ„±ª’®À¿¡À£°\n");
		return 'g';
	}
	else
	{
		unfold(board,bone, x, y, '0' + count(board, x, y));
		return 'c';
	}
}

void unfold(char board[ROWS][COLS],char bone[ROWS][COLS],int x,int y,char r)
{
	if (r == '0')
	{
		if (bone[x][y] != ' ')
		{
			bone[x][y] = ' ';
			unfold(board, bone, x - 1, y - 1, '0' + count(board, x - 1, y - 1));
			unfold(board, bone, x - 1, y , '0' + count(board, x - 1, y ));
			unfold(board, bone, x - 1, y + 1, '0' + count(board, x - 1, y + 1));
			unfold(board, bone, x , y - 1, '0' + count(board, x , y - 1));
			unfold(board, bone, x , y + 1, '0' + count(board, x , y + 1));
			unfold(board, bone, x + 1, y - 1, '0' + count(board, x + 1, y - 1));
			unfold(board, bone, x + 1, y , '0' + count(board, x + 1, y ));
			unfold(board, bone, x + 1, y + 1, '0' + count(board, x + 1, y + 1));
		}
	}
	else
	{
		bone[x][y] = '0' + count(board, x, y);
	}
}