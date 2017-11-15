void help(){	
	system("cls");
	int x = 5;	int y = 4;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	SetCurrentCursorPos(x, y + 0); printf("이 프로그램은 누구나 시도할 수 있는 Quiz 프로그램입니다."); 
	SetCurrentCursorPos(x, y + 2); printf("이번 학기 오픈소스공학 수업 내용을 포함하고 있습니다."); 
	SetCurrentCursorPos(x, y + 4); printf("Quiz 풀이를 통해 여러분들이 공부한 지식과 수업 내용들을 테스트 해보세요 ^^\n\n"); 
	}

void titleMenu()
{
	char choice;
	char playername[20];

	while (1)
	{
		if (_kbhit())
		{
			_getch();  break;   // 버퍼에 기록된 키값을 버림
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
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);		SetCurrentCursorPos(5, 4); printf("본인의 이름을 입력해주세요...!");
		SetCurrentCursorPos(5, 6); printf("(한 단어로 작성해주세요.)");
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
