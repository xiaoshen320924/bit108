#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char cb[ROW][COL];
	init(cb,ROW,COL);
	print(cb,ROW,COL);
	player_move();
	print(cb, ROW, COL);
	com_move();
	print(cb, ROW, COL);
}

void game_play()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();
			break;	
		case 0:
			printf("退出游戏成功！\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
		}

	} while (input);
}

int main()
{
	game_play();
	return 0;
}