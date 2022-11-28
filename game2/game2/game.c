#include  "game.h";
void InitBoard(char board[ROWS][COLS], int row, int col,char ret)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			board[i][j] = ret;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//�еı�־
	for (i = 0; i <= row; i++)
	{
		printf("%d",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d",i);
		for (j = 1; j <= col; j++)
		{
				printf("%c", board[i][j]);		
		}
		printf("\n");
	}

}
void SetBoard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		//�ж��Ƿ�Ϊ�ַ�0
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int Mine_Count(char mine[ROWS][COLS], int x, int y)
{
	return    mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
}
void ShowBoard(char mine[ROWS][COLS], char  show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		//�ж��Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y]=="1")
			{
				printf("�㱻ը����\n");
				DisplayBoard(mine, row, col);
			}
			else
			{
				//ͳ����Χ�м�����
				int count = Mine_Count(mine,x,y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
			}
		

		}
		else
		{
			printf("���벻�Ϸ�������������");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
	}

}