#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//��ӡ����
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT ;
	while (count )
	{
		int x = rand() % row+1;//1-9
		int y = rand() % col+1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}	
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void play(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//Ӧ�õݹ��ų���Χû���׵�����
{
	int ret;
	ret = get_mine_count(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '*'))
			play(mine, show, x - 1, y - 1);
		if ((x - 1) > 0 && (y) > 0 && (show[x - 1][y] == '*'))
			play(mine, show, x - 1, y);
		if ((x - 1) > 0 && (y + 1) > 0 && (show[x - 1][y + 1] == '*'))
			play(mine, show, x - 1, y + 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '*'))
			play(mine, show, x, y - 1);
		if ((x) > 0 && (y + 1) > 0 && (show[x][y + 1] == '*'))
			play(mine, show, x, y + 1);
		if ((x + 1) > 0 && (y - 1) > 0 && (show[x + 1][y - 1] == '*'))
			play(mine, show, x + 1, y - 1);
		if ((x + 1) > 0 && (y) > 0 && (show[x + 1][y] == '*'))
			play(mine, show, x + 1, y);
		if ((x + 1) > 0 && (y + 1) > 0 && (show[x + 1][y + 1] == '*'))
			play(mine, show, x + 1, y + 1);
	}
	else
		show[x][y] = ret + '0';
}

void FinedMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����");
				DisplayBoard(mine, row, col);
				break;
			}
			else//����
			{	
				int count = get_mine_count(mine, x, y);
				play(mine, show, x , y );
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
		}
	}
}


