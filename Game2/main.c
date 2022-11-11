#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	srand((unsigned int)time(NULL));
	char board[ROWS][COLS];
	char bone[ROWS][COLS];

	init(board, ROWS, COLS,'0');
	init(bone, ROWS, COLS, '*');
	put_bone(board,NUM,ROW,COL);
	print(board, ROW, COL);

	print(bone, ROW, COL);

	int i = MAX-NUM;
	while (i > 0)
	{
		int x = 0, y = 0;
		printf("��ѡ��Ҫɨ���λ��->");
		scanf("%d %d", &x, &y);
		if (bone[x][y] != '*')
		{
			printf("��λ���Ѿ���ɨ������������!\n");
			continue;
		}
		char r=player_do(board, bone, x, y);
		if (r =='g')
		{
			print(board, ROW, COL);
			break;
		}
		else
		{
			print(bone, ROW, COL);
			i--;
		}
	}

	if (i == 0)
	{
		printf("��ϲ��ɨ�׳ɹ���\n");
		print(board, ROW, COL);
	}

}

void game_play()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳��ɹ���");
			break;
		default:
			printf("�Ƿ����룡����������-> ");
			break;
		}
	} while (input);
}

int main()
{
	game_play();
	return 0;
}