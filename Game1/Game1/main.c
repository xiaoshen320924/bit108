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
		printf("��һ�ʤ��\n");
		break;
	case '#':
		printf("���Ի�ʤ��\n");
		break;
	case 'P':
		printf("ƽ��\n");
	}
	

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