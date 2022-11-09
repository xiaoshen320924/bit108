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
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col ; j++)
		{
			printf(" %c ", cb[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
     if(i<row-1)
		for (j = 0; j < col; j++)
		{
				printf("---");
				if (j < col - 1)
					printf("|");
		}
		printf("\n");
	}
}

void player_move(char cb[ROW][COL],int row,int col)
{
	int i = 0, j = 0;
	printf("��һ���:\n");
	while (1)
	{
		printf("����������->");
		scanf("%d %d", &i, &j);
		if (i <= row && i >= 1 && j <= col && j >= 1)
		{
			if (cb[i - 1][j - 1] == ' ')
			{
				cb[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("��λ�ò��ɷ������ӣ�������\n");
			}
		}
		else
		{
			printf("������Ч���꣬���������룺");
		}
	}
}

void com_move(char cb[ROW][COL],int row,int col)
{
	printf("���Ի��ڣ�\n");
	while (1)
	{
		int i = rand() % 3;
		int j = rand() % 3;
		if (cb[i][j] == ' ')
		{
			cb[i][j] = '#';
			break;
		}
	}

}

char result(char cb[ROW][COL], int row, int col)
{
	//�ж�����������
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		if (cb[i][0] == cb[i][1] && cb[i][1] == cb[i][2] && cb[i][0] != ' ')
		{
			if (cb[i][0] == '*')
				return '*';	
			else
				return '#';

		}

	}

	for (j = 0; j < col; j++)
	{
		if (cb[0][j] == cb[1][j] && cb[1][j] == cb[2][j] && cb[0][j] != ' ')
		{
			if (cb[0][j] == '*')
				return '*';
			else
				return '#';
		}
	}

	if (cb[0][0] == cb[1][1] && cb[1][1] == cb[2][2] && cb[0][0] != ' ')
	{
		if (cb[0][0] == '*')
			return '*';
		else
			return '#';
	}

	if (cb[0][2] == cb[1][1] && cb[1][1] == cb[2][0] && cb[0][2] != ' ')
	{
		if (cb[0][2] == '*')
			return '*';
		else
			return '#';
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if(cb[i][j]==' ')
				return 'C';
		}
	}

	return 'P';
}