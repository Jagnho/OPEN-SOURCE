void help(){	
	system("cls");
	int x = 5;	int y = 4;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	SetCurrentCursorPos(x, y + 0); printf("�� ���α׷��� ������ �õ��� �� �ִ� Quiz ���α׷��Դϴ�."); 
	SetCurrentCursorPos(x, y + 2); printf("�̹� �б� ���¼ҽ����� ���� ������ �����ϰ� �ֽ��ϴ�."); 
	SetCurrentCursorPos(x, y + 4); printf("Quiz Ǯ�̸� ���� �����е��� ������ ���İ� ���� ������� �׽�Ʈ �غ����� ^^\n\n"); 
	}

void titleMenu()
{
	char choice;
	char playername[20];

	while (1)
	{
		if (_kbhit())
		{
			_getch();  break;   // ���ۿ� ��ϵ� Ű���� ����
		}
	}


	reset();

	mainhome:
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

	puts("\n\n\t\t Welcome To OpenSource TEST Program\n\n");	
	puts("\n\t\t-------------------------------");
	puts("\n\t\t Enter 'S' to Start Game       ");
	puts("\n\t\t Enter 'V' to View High Score  ");
	puts("\n\t\t Enter 'H' for Help            ");
	puts("\n\t\t Enter 'Q' to Quit             ");
	printf("\n\t\t-------------------------------\n\n\t\t  ");
	choice = toupper(_getch());

	if (choice == 'S') {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);		SetCurrentCursorPos(5, 4); printf("������ �̸��� �Է����ּ���...!");
		SetCurrentCursorPos(5, 6); printf("(�� �ܾ�� �ۼ����ּ���.)");
	}
	if (choice == 'V') {

	}
	if (choice == 'H') {
		help();
		_getch();
		goto mainhome;
	}
	if (choice == 'Q') {
		exit(1);
	}
