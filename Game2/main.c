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
		printf("请选择要扫描的位置->");
		scanf("%d %d", &x, &y);
		if (bone[x][y] != '*')
		{
			printf("该位置已经被扫过啦！请重试!\n");
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
		printf("恭喜，扫雷成功！\n");
		print(board, ROW, COL);
	}

}

void game_play()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择-> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出成功！");
			break;
		default:
			printf("非法输入！请重新输入-> ");
			break;
		}
	} while (input);
}

int main()
{
	game_play();
	return 0;
}