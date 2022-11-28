#include  "game.h";
void menu()
{
	printf("***************************\n");
	printf("****1.play       0.exit****\n");
	printf("***************************\n");
}
void game()
{
	//雷的布局
	//雷的信息
	char  mine[ROWS][COLS] = { 0 };
	//排除雷的信息
	char  show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//布置雷
	SetBoard(mine, ROW, COL);
	////打印
	DisplayBoard(mine, ROW, COL);
	printf("\n");
	////打印
	DisplayBoard(show, ROW, COL);
	//开始扫雷
	ShowBoard(mine,show, ROW, COL);


}
void Test() 
{
	//菜单
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("请选择>");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("请重新选择\n");
		break;
	}

}
//扫雷
int main() 
{
	Test();
	return 0;
}