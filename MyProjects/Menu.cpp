// Menu.cpp : Defines the entry point for the console application.
//
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	int activeColor = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
	int defaultColor = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;

	const int stringsSize = 8;


	char* strings[stringsSize] = { "Menu1", "Menu2", "Menu3", "Menu4", "Menu5", "Menu6", "Menu7", "Exit" };

	COORD pos;

	int activeItem = 5;

	while (1) {
		for (int i = 0; i < stringsSize; i++) {
			if (i == activeItem)
				SetConsoleTextAttribute(hStdOut, activeColor);
			else
				SetConsoleTextAttribute(hStdOut, defaultColor);


			pos.X = 10;
			pos.Y = 5 + i;
			SetConsoleCursorPosition(hStdOut, pos);

			cout << strings[i];

		}
		int code = _getch();

		switch (code) {
		case 72: {
			activeItem--;
			if (activeItem < 0) activeItem = 0;
		}break;
		case 80: {
			activeItem++;
			if (activeItem > stringsSize - 1) activeItem = stringsSize - 1;
		}break;
		case 13: {
			if (7 == activeItem) {
				return;
			}
		}break;
		}
	}

}

