#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*******    1��play    ********\n");
	printf("*******    0��exit    ********\n");
	printf("******************************\n");
}

void init(char cb[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			cb[i][j] = ' ';
		}
	}
	printf("���̳�ʼ���ɹ���\n");
}

void print(char cb[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", cb[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
     if(i<ROW-1)
		for (j = 0; j < COL; j++)
		{
				printf("_ _ ");
		}
		printf("\n");
	}
}

void player_move(char cb[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	printf("��һ��ڣ����������꣺");
	scanf("%d %d", &i, &j);
	if(cb[i-1][j-1]!='*')
		cb[i - 1][j - 1] = '*';
}

void com_move(char cb[ROW],int row,int col)
{

}