#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

char *max_len(char *str, int &max) {
	char *maxword = 0;
	int sz = strlen(str);			//функция поиска размера строки(размер всей строки записали в sz
	char *f = NULL;
	f = strtok(str, " ");				//указатель f смотрит на первое слово
	while (true) {

		char *tmp = strtok(NULL, " ");//strtok вызывается второй раз, поэтому в tmp запишется указатель на вторую строку


		if (tmp == NULL) {			//если в tmp хранится NULL, значит мы достигли последнего слова
			if ((strlen(f)) > max) {//проверяем размер этого слова, если он больше 
				max = strlen(f);	//записываем размер 
				maxword = f;		//и его указатель
			}
			break;
		}



		if (tmp - f - 1 > max) {		//указатель на второе слово - указатель на первое слово и минус пробел равно размер слова
			max = tmp - f - 1;
			maxword = f;
		}
		f = tmp;
	}

	return maxword;					//возвращаем указатель на самое большое слово, размер передается по ссылке
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