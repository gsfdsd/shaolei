#include  "game.h";
void menu()
{
	printf("***************************\n");
	printf("****1.play       0.exit****\n");
	printf("***************************\n");
}
void game()
{
	//�׵Ĳ���
	//�׵���Ϣ
	char  mine[ROWS][COLS] = { 0 };
	//�ų��׵���Ϣ
	char  show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//������
	SetBoard(mine, ROW, COL);
	////��ӡ
	DisplayBoard(mine, ROW, COL);
	printf("\n");
	////��ӡ
	DisplayBoard(show, ROW, COL);
	//��ʼɨ��
	ShowBoard(mine,show, ROW, COL);


}
void Test() 
{
	//�˵�
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("��ѡ��>");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("������ѡ��\n");
		break;
	}

}
//ɨ��
int main() 
{
	Test();
	return 0;
}