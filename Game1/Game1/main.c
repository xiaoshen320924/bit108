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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();
			break;	
		case 0:
			printf("�˳���Ϸ�ɹ���\n");
			break;
		default:
			printf("����������������룺\n");
		}

	} while (input);
}

int main()
{
	game_play();
	return 0;
}