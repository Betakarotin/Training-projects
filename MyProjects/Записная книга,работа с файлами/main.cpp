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


	//���������� �������
	notebook * ar;
	ar = zap(sz);
	infaddtobook(sz,ar);
	//cout << "������ �������� �������?������� 1\n ������ ������� �������?������� 2\n ������ ����������� ��� �����?������� 3\n ������ ����� �������?������� 4\n ���������� �����,������� 5\n ����� ���� ���� �� ����� � ����� ��� ���������� �� �����,������� 6\n �������� ������������ ������ ��������,������� 7\n";

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
	//	cout << "����� �� �����,������� 1\n ����� �� �������,������� 2\n ����� �� ��������,������� 3\n ����� �� ���� ��������,������� 4\n ����� �� ������ ��������,������� 5\n ����� �� ���� ��������,������� 6\n";
	//	cin >> numeral;
	//	cin.get();
	//	system("cls");
	//	find(sz, ar, numeral);
	//	break;
	//case 5:
	//	numeral = 0;
	//	cout << "���������� �� ������,������� 1\n ���������� �� �������,������� 2\n";
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