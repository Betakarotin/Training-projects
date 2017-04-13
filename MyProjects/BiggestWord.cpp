#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

char *max_len(char *str, int &max) {
	char *maxword = 0;
	int sz = strlen(str);			//������� ������ ������� ������(������ ���� ������ �������� � sz
	char *f = NULL;
	f = strtok(str, " ");				//��������� f ������� �� ������ �����
	while (true) {

		char *tmp = strtok(NULL, " ");//strtok ���������� ������ ���, ������� � tmp ��������� ��������� �� ������ ������


		if (tmp == NULL) {			//���� � tmp �������� NULL, ������ �� �������� ���������� �����
			if ((strlen(f)) > max) {//��������� ������ ����� �����, ���� �� ������ 
				max = strlen(f);	//���������� ������ 
				maxword = f;		//� ��� ���������
			}
			break;
		}



		if (tmp - f - 1 > max) {		//��������� �� ������ ����� - ��������� �� ������ ����� � ����� ������ ����� ������ �����
			max = tmp - f - 1;
			maxword = f;
		}
		f = tmp;
	}

	return maxword;					//���������� ��������� �� ����� ������� �����, ������ ���������� �� ������
}

void glas(char *str, int sz) {
	for (int i = 0; i < sz; i++)
		if (str[i] == 'e' || str[i] == 'y' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o' || str[i] == 'a')
			cout << str[i];
	cout << endl;
}


void main() {
	char ar[100] = "qwerty asd zxacvbunm";
	int max = 0;
	int &max_sz = max;
	char *word = max_len(ar, max_sz);
	cout << word << endl << max << endl;
	glas(word, max);
}