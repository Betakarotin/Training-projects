#pragma once
#include"Header.h"
#define STATIC





notebook *zap(int sz) {
	notebook *masbook = new notebook[sz];

	//1
	strcpy(masbook[0].fio.fam, "Baranov");
	strcpy(masbook[0].fio.name, "Oleg");
	strcpy(masbook[0].fio.otch, "Vladimirovich");
	masbook[0].date.day = 18;
	strcpy(masbook[0].date.month, "Yanvarb");
	masbook[0].date.age = 1989;
	strcpy(masbook[0].numphone, "+380671244739");
	//2
	strcpy(masbook[1].fio.fam, "Romanov");
	strcpy(masbook[1].fio.name, "Alex");
	strcpy(masbook[1].fio.otch, "Petrovich");
	masbook[1].date.day = 22;
	strcpy(masbook[1].date.month, "Iulb");
	masbook[1].date.age = 1967;
	strcpy(masbook[1].numphone, "+380506982114");
	//3
	strcpy(masbook[2].fio.fam, "Kernes");
	strcpy(masbook[2].fio.name, "Genadii");
	strcpy(masbook[2].fio.otch, "Adolfovich");
	masbook[2].date.day = 16;
	strcpy(masbook[2].date.month, "Aprl");
	masbook[2].date.age = 1977;
	strcpy(masbook[2].numphone, "+380639866526");
	//4
	strcpy(masbook[3].fio.fam, "Pavlov");
	strcpy(masbook[3].fio.name, "Roman");
	strcpy(masbook[3].fio.otch, "Viktorovich");
	masbook[3].date.day = 28;
	strcpy(masbook[3].date.month, "Fevr");
	masbook[3].date.age = 1991;
	strcpy(masbook[3].numphone, "+380965899259");
	//5
	strcpy(masbook[4].fio.fam, "Samotoy");
	strcpy(masbook[4].fio.name, "Dmitrii");
	strcpy(masbook[4].fio.otch, "Nicol");
	masbook[4].date.day = 18;
	strcpy(masbook[4].date.month, "Iulb");
	masbook[4].date.age = 1979;
	strcpy(masbook[4].numphone, "+380501981693");

	return masbook;
}

notebook *addcont(int sz, notebook *ar) {

	setlocale(LC_ALL, "rus");
	notebook *addbook = new notebook[sz + 1];
	for (int i = 0; i < sz; i++) {
		strcpy_s(addbook[i].fio.fam, ar[i].fio.fam);
		strcpy_s(addbook[i].fio.name, ar[i].fio.name);
		strcpy_s(addbook[i].fio.otch, ar[i].fio.otch);
		addbook[i].date.day = ar[i].date.day;
		strcpy_s(addbook[i].date.month, ar[i].date.month);
		addbook[i].date.age = ar[i].date.age;
		strcpy_s(addbook[i].numphone, ar[i].numphone);
	}
	gets_s(addbook[sz].fio.fam, 100);
	gets_s(addbook[sz].fio.name, 100);
	gets_s(addbook[sz].fio.otch, 100);
	cin >> (addbook[sz].date.day);
	cin.get();
	gets_s(addbook[sz].date.month, 20);
	cin >> (addbook[sz].date.age);
	cin.get();
	gets_s(addbook[sz].numphone, 15);

	return addbook;
}

notebook *delcont(int sz, notebook *ar) {

	notebook *delname = new notebook[sz - 1];
	int delnum = 0;
	cout << "Введите номер контакта,который хотите удалить\n";
	cin >> delnum;
	int num = 0;
	for (int i = 0; i < sz; i++) {

		if (i != delnum) {
			strcpy_s(delname[num].fio.fam, ar[i].fio.fam);
			strcpy_s(delname[num].fio.name, ar[i].fio.name);
			strcpy_s(delname[num].fio.otch, ar[i].fio.otch);
			delname[num].date.day = ar[i].date.day;
			strcpy_s(delname[num].date.month, ar[i].date.month);
			delname[num].date.age = ar[i].date.age;
			strcpy_s(delname[num].numphone, ar[i].numphone);
			num++;
		}


	}
	return delname;
}

void find(int sz, notebook *ar, int numeral) {
	char inname[15];
	char infam[15];
	char inotch[15];
	int inday = 0;
	char inmonth[15];
	int inage = 0;
	switch (numeral) {
	case 1:

		cout << "Введите имя: ";
		gets_s(inname, 15);
		for (int i = 0; i < sz; i++) {
			int sravname = strcmp(ar[i].fio.name, inname);
			if (sravname == 0) {
				noteout(ar[i]);
			}



		}

		break;
	case 2:

		cout << "Введите фамилию: ";
		gets_s(infam, 15);
		for (int i = 0; i < sz; i++) {
			int sravfam = strcmp(ar[i].fio.fam, infam);
			if (sravfam == 0) {
				noteout(ar[i]);
			}

		}
		break;
	case 3:

		cout << "Введите отчество: ";
		gets_s(inotch, 15);
		for (int i = 0; i < sz; i++) {
			int sravotch = strcmp(ar[i].fio.otch, inotch);
			if (sravotch == 0) {
				noteout(ar[i]);
			}
		}
		break;
	case 4:

		cout << "Введите дату рождения: ";
		cin >> inday;
		for (int i = 0; i < sz; i++) {
			if (ar[i].date.day == inday) {
				noteout(ar[i]);
			}

		}
		break;
	case 5:

		cout << "Введите месяц рождения: ";
		gets_s(inmonth, 15);
		for (int i = 0; i < sz; i++) {
			int sravmonth = strcmp(ar[i].fio.fam, inmonth);
			if (sravmonth == 0) {
				noteout(ar[i]);
			}

		}
		break;
	case 6:

		cout << "Введите год рождения: ";
		cin >> inage;
		for (int i = 0; i < sz; i++) {
			if (ar[i].date.age == inage) {
				noteout(ar[i]);
			}

		}
		break;
	}
}

void sort(int sz, notebook *ar, int numeral) {

	switch (numeral) {
	case 1:
		for (int q = 0; q < sz; q++) {
			for (int i = 0; i < sz; i++) {
				int res = strcmp(ar[i].fio.name, ar[i + 1].fio.name);
				if (res > 0)
					zamenastr(ar, i, i + 1);
			}
		}
		break;
	case 2:
		for (int q = 0; q < sz; q++) {
			for (int i = 0; i < sz; i++) {
				int res = strcmp(ar[i].fio.fam, ar[i + 1].fio.fam);
				if (res > 0)
					zamenastr(ar, i, i + 1);
			}
		}
		break;
	}
}

void zamenastr(notebook *ar, int a, int b) {
	notebook tmp;
	tmp = ar[a];
	ar[a] = ar[b];
	ar[b] = tmp;
}
void fioout(fio f) {

	cout << f.fam << " ";
	cout << f.name << " ";
	cout << f.otch << endl;

}

void dateout(date d) {

	cout << d.day << " ";
	cout << d.month << " ";
	cout << d.age << endl;

}

void noteout(notebook n) {
	fioout(n.fio);
	dateout(n.date);
	cout << n.numphone << endl;
}

void corectnum() {
	char cornum[20];
	
	cout << "Введите номер телефона,который хотите проверить\n";
	gets_s(cornum, 20);

	int col = strlen(cornum);
	if (col == 13) {
		if (cornum[0] == '+') {
			for (int i = 1; i < 13; i++) {
				int res = isdigit(cornum[i]);
				if (res == 0) {
					cout << "Номер введен неверно\n";
					break;
				}
				else {
					
					cout << "Номер введен верно\n";
					break;
				}
			}
		}
		else
			cout << "Номер введен неверно\n";
	}
	else
		cout << "Номер введен неверно\n";
}

void nameinf(int sz,notebook *ar) {
	for (int i = 0; i < sz; i++) {
		cout << "Number " << i + 1 << endl;
		cout << ar[i].fio.name<<endl;
	}
	int picknum = 0;
	cout << "Выберите номер имени,информацию о котором хотите узнать\n";
	cin >> picknum;
	noteout(ar[picknum-1]);
	
}

void cornumscanf() {
	
	int str,a, b, c;
	while (4 != scanf_s("+3(%4d)%3d-%2d-%2d", &str, &a,&b,&c)) {
		cin.get();
	}
	printf_s("+3(%d)%d-%d-%d", str, a,b,c);
}

void infaddfile(FILE *f,notebook masbook) {
	
	
	fprintf_s(f, "%s ", masbook.fio.fam);
	fprintf_s(f, "%s ", masbook.fio.name);
	fprintf_s(f, "%s\n", masbook.fio.otch);
	fprintf_s(f, "%d ", masbook.date.day);
	fprintf_s(f, "%s ", masbook.date.month);
	fprintf_s(f, "%d\n", masbook.date.age);
	fprintf_s(f, "%s\n", masbook.numphone);


}

void infizfile(mybook masbook) {
	FILE *f;
	char mas[50];
	int sz;
	if (fopen_s(&f, "Notebook.txt", "r") != 0)
		cout << "Такого файла нет";
	else {
		
		fscanf(f, "%s\n", masbook.fio.fam);
		
		fscanf(f, "%s\n", masbook.fio.name);
		
		fscanf(f, "%s\n", masbook.fio.otch);
		
		fscanf(f, "%s\n", mas);
		sz = strlen(mas);
		int chislo=simvolvchislo(mas, sz);
		masbook.date.day = chislo;

		fscanf(f, "%s\n", masbook.date.month);
		
		fscanf(f, "%s\n",mas);
		sz = strlen(mas);
		chislo = simvolvchislo(mas, sz);
		masbook.date.age = chislo;
		
		fscanf(f, "%s\n", masbook.numphone);
		
			printf_s("%s\n", masbook.fio.fam);
			printf_s("%s\n", masbook.fio.name);
			printf_s("%s\n", masbook.fio.otch);
			printf_s("%d\n", masbook.date.day);
			printf_s("%s\n", masbook.date.month);
			printf_s("%d\n", masbook.date.age);
			printf_s("%s\n", masbook.numphone);
		
	}
	fclose(f);
}

int simvolvchislo(char mas[50],int sz) {
	int res = 0;
	int k = 1;
	for (int i = sz - 1; i >= 0; i--) {
		res=res+((int)mas[i] - 48)*k;
		k *= 10;
	}
	return res;
}

note *zapl(int sz) {
	note *masbook = new note[sz];

	//1
	strcpy(masbook[0].fio.fam, "Baranov");
	strcpy(masbook[0].fio.name, "Oleg");
	strcpy(masbook[0].fio.otch, "Vladimirovich");
	masbook[0].date.day = 18;
	strcpy(masbook[0].date.month, "Yanvarb");
	masbook[0].date.age = 1989;
	strcpy(masbook[0].numphone, "+380671244739");
	//2
	strcpy(masbook[1].fio.fam, "Romanov");
	strcpy(masbook[1].fio.name, "Alex");
	strcpy(masbook[1].fio.otch, "Petrovich");
	masbook[1].date.day = 22;
	strcpy(masbook[1].date.month, "Iulb");
	masbook[1].date.age = 1967;
	strcpy(masbook[1].numphone, "+380506982114");
	//3
	strcpy(masbook[2].fio.fam, "Kernes");
	strcpy(masbook[2].fio.name, "Genadii");
	strcpy(masbook[2].fio.otch, "Adolfovich");
	masbook[2].date.day = 16;
	strcpy(masbook[2].date.month, "Aprl");
	masbook[2].date.age = 1977;
	strcpy(masbook[2].numphone, "+380639866526");
	//4
	strcpy(masbook[3].fio.fam, "Pavlov");
	strcpy(masbook[3].fio.name, "Roman");
	strcpy(masbook[3].fio.otch, "Viktorovich");
	masbook[3].date.day = 28;
	strcpy(masbook[3].date.month, "Fevr");
	masbook[3].date.age = 1991;
	strcpy(masbook[3].numphone, "+380965899259");
	//5
	strcpy(masbook[4].fio.fam, "Samotoy");
	strcpy(masbook[4].fio.name, "Dmitrii");
	strcpy(masbook[4].fio.otch, "Nicol");
	masbook[4].date.day = 18;
	strcpy(masbook[4].date.month, "Iulb");
	masbook[4].date.age = 1979;
	strcpy(masbook[4].numphone, "+380501981693");

	return masbook;

}



void fiout(f fio) {

	cout << fio.fam << " ";
	cout << fio.name << " ";
	cout << fio.otch << endl;

}

void datout(d date) {

	cout << date.day << " ";
	cout << date.month << " ";
	cout << date.age << endl;

}

void notout(note n) {
	fiout(n.fio);
	datout(n.date);
	cout << n.numphone << endl;
}

void infaddtobook(int sz,notebook *masbook) {
	FILE *f;
	fopen_s(&f, "Notebook.txt", "w");
	//notebook **arr=new notebook* ;
	
	/*for (int i = 0; i < sz; i++) {
		arr[i] = new notebook[i];
	}*/

	for (int i = 0; i < sz; i++) {
		infaddfile(f,masbook[i]);

	}
	fclose(f);
}