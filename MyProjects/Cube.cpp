#include<iostream>
using namespace std;
#include<ctime>



void one() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 5 && y == 5) || (i == 6 && y == 6) || (i == 6 && y == 5) || (i == 5 && y == 6))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void two() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 8 && y == 3) || (i == 3 && y == 8))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void three() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 8 && y == 3) || (i == 3 && y == 8) || (i == 5 && y == 5))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void four() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 3 && y == 3) || (i == 8 && y == 3) || (i == 3 && y == 8) || (i == 8 && y == 8))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void five() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 8 && y == 3) || (i == 3 && y == 3) || (i == 8 && y == 8) || (i == 3 && y == 8) || (i == 5 && y == 5) || (i == 6 && y == 6) || (i == 6 && y == 5) || (i == 5 && y == 6))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void six() {
	for (int i = 0; i < 12; i++) {
		for (int y = 0; y < 12; y++) {
			if (i == 0 || i == 11 || y == 0 || y == 11 || (i == 4 && y == 3) || (i == 4 && y == 5) || (i == 4 && y == 7) || (i == 7 && y == 3) || (i == 7 && y == 5) || (i == 7 && y == 7))
				cout << "*";

			else
				cout << " ";

		}
		cout << endl;
	}

}

void sw(int a, int b) {
	cout << "Игрок 1\n";

	switch (a) {

	case 1:void(*p_one)(); p_one = one; one(); break;
	case 2:void(*p_two)(); p_two = two; two(); break;
	case 3:void(*p_three)(); p_three = three; three(); break;
	case 4:void(*p_four)(); p_four = four; four(); break;
	case 5:void(*p_five)(); p_five = five; five(); break;
	case 6:void(*p_six)(); p_six = six; six(); break;
	}


	cout << "Игрок 2\n";
	switch (b) {

	case 1:void(*p_one)(); p_one = one; one(); break;
	case 2:void(*p_two)(); p_two = two; two(); break;
	case 3:void(*p_three)(); p_three = three; three(); break;
	case 4:void(*p_four)(); p_four = four; four(); break;
	case 5:void(*p_five)(); p_five = five; five(); break;
	case 6:void(*p_six)(); p_six = six; six(); break;

	}

}

void main() {
	setlocale(0, "");
	int a = 0, b = 0;
	srand((unsigned int)time(NULL));
	a = rand() % 5 + 1;
	b = rand() % 5 + 1;
	sw(a, b);
	if (a > b)
		cout << "Победил игрок №1\n";
	else
		if (b > a)
			cout << "Победил игрок №2\n";
		else
			cout << "Ничья\n";
}