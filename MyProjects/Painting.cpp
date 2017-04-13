#include <windows.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void main()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	DWORD color = 0;

	while (1)
	{
		COORD pos;
		pos.X = rand() % 80;
		pos.Y = rand() % 25;
		SetConsoleCursorPosition(hStdOut, pos);
		color = (rand() % 2 ? BACKGROUND_RED : 0) | (rand() % 2 ? BACKGROUND_GREEN : 0) | (rand() % 2 ? BACKGROUND_BLUE : 0) | (rand() % 2 ? BACKGROUND_INTENSITY : 0) |
			(rand() % 2 ? FOREGROUND_RED : 0) | (rand() % 2 ? FOREGROUND_GREEN : 0) | (rand() % 2 ? FOREGROUND_BLUE : 0) | (rand() % 2 ? FOREGROUND_INTENSITY : 0);


		//color = BACKGROUND_INTENSITY|FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY|BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE	;

		SetConsoleTextAttribute(hStdOut, color);
		cout << (char)((rand() % 221) + 34);
		Sleep(10);

	}

}
