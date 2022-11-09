#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	srand((unsigned int)time(NULL));
	char cb[ROW][COL];
	char r = 'C';
	init(cb,ROW,COL);
	print(cb,ROW,COL);
	while (r == 'C')
	{
		player_move(cb, ROW, COL);
		print(cb, ROW, COL);
		r = result(cb, ROW, COL);
		if (r == '*')
			break;
		com_move(cb, ROW, COL);
		print(cb, ROW, COL);
		r = result(cb, ROW, COL);
	}
	switch(r)
	{
	case '*':
		printf("玩家获胜！\n");
		break;
	case '#':
		printf("电脑获胜！\n");
		break;
	case 'P':
		printf("平局\n");
	}
	

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