#include"Header.h"


void main() {
	setlocale(0, "rus");
	int sz = 5;
	
	/*notebook x;
	x.date.age = 2016;
	x.date.day = 16;
	strcpy_s(x.date.month,10 , "ihdfg");
	strcpy_s(x.fio.fam, 10, "fam");
	strcpy_s(x.fio.name, 10, "nam");
	strcpy_s(x.fio.otch, 10, "otch");
	strcpy_s(x.numphone, 10, "kjdhkdjh3");
	infaddfile(x);*/

	/*infaddtobook(sz);*/


	//Заполнение массива
	notebook * ar;
	ar = zap(sz);
	infaddtobook(sz,ar);
	//cout << "Хотите добавить контакт?Нажмите 1\n Хотите удалить контакт?Нажмите 2\n Хотите просмотреть всю книгу?Нажмите 3\n Хотите найти контакт?Нажмите 4\n Сортировка книги,нажмите 5\n Вывод всех имен на экран и поиск все информации по имени,нажмите 6\n Проверка корректности номера телефона,нажмите 7\n";

	//int numeral = 0;
	//cin >> numeral;
	//cin.get();
	//system("cls");
	//notebook *add;
	//notebook *del;
	//switch (numeral) {
	//case 1:
	//	add = addcont(sz, ar);
	//	sz++;
	//	for (int i = 0; i < sz; i++) {
	//		cout << "Number " << i + 1 << endl;
	//		noteout(add[i]);
	//	}
	//	break;
	//case 2:
	//	for (int i = 0; i < sz; i++) {
	//		cout << "Number " << i + 1 << endl;
	//		noteout(ar[i]);
	//	}
	//	system("pause");
	//	system("cls");
	//	del = delcont(sz, ar);
	//	sz--;
	//	for (int i = 0; i < sz; i++) {
	//		cout << "Number " << i + 1 << endl;
	//		noteout(del[i]);
	//	}
	//	break;
	//case 3:
	//	for (int i = 0; i < sz; i++) {
	//		cout << "Number " << i + 1 << endl;
	//		noteout(ar[i]);
	//	}
	//	break;
	//case 4:
	//	numeral = 0;
	//	cout << "Поиск по имени,нажмите 1\n Поиск по фамилии,нажмите 2\n Поиск по отчеству,нажмите 3\n Поиск по дате рождения,нажмите 4\n Поиск по месяцу рождения,нажмите 5\n Поиск по году рождения,нажмите 6\n";
	//	cin >> numeral;
	//	cin.get();
	//	system("cls");
	//	find(sz, ar, numeral);
	//	break;
	//case 5:
	//	numeral = 0;
	//	cout << "Сортировка по имение,нажмите 1\n Сортировка по фамилии,нажмите 2\n";
	//	cin >> numeral;
	//	cin.get();
	//	sort(sz, ar, numeral);
	//	for (int i = 0; i < sz; i++) {
	//		cout << "Number " << i + 1 << endl;
	//		noteout(ar[i]);
	//	}
	//	break;
	//case 6:
	//	nameinf(sz, ar);
	//	break;
	//case 7:
	//	corectnum();
	//	break;
	//}

	
	/*note * arr;
	arr = zapl(sz);
		for (int i = 0; i < sz; i++) {
			cout << "Number " << i + 1 << endl;
			notout(arr[i]);*/

}