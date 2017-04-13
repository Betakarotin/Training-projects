#include<iostream>
using namespace std;
void main()

{
	setlocale(0, "");
	int arr[10][10];

	//Заполнение 00000
	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			arr[str][col] = rand() % 2;
	}


	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			cout << arr[str][col];
		cout << endl;
	}
	int a = 0, b = 0, c = 0, d = 0;
	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			if (arr[str][col] == 0 && arr[str][col + 1] == arr[str][col] && arr[str + 1][col] == arr[str][col] && arr[str + 1][col + 1] == arr[str][col])
				a++;

	}
	cout << "2 X 2";
	cout << endl << a;

	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			if (arr[str][col] == 1 && arr[str][col + 1] == arr[str][col] && arr[str + 1][col] == arr[str][col] && arr[str + 1][col + 1] == arr[str][col])
				b++;

	}
	cout << endl << b;

	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			if (arr[str][col] == 0 && arr[str][col + 1] == arr[str][col] && arr[str + 1][col] == arr[str][col] && arr[str + 1][col + 1] == arr[str][col] && arr[str][col] == arr[str][col + 2] && arr[str][col] == arr[str + 1][col + 2] && arr[str][col] == arr[str + 2][col + 2])
				c++;

	}
	cout << endl << "3 X 3";
	cout << endl << c;

	for (int str = 0; str < 10; str++) {
		for (int col = 0; col < 10; col++)
			if (arr[str][col] == 1 && arr[str][col + 1] == arr[str][col] && arr[str + 1][col] == arr[str][col] && arr[str + 1][col + 1] == arr[str][col] && arr[str][col] == arr[str][col + 2] && arr[str][col] == arr[str + 1][col + 2] && arr[str][col] == arr[str + 2][col + 2])
				d++;

	}
	cout << endl << d << endl;
}