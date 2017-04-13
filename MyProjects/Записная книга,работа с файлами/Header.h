#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct fio {
	char fam[100];
	char name[10];
	char otch[100];
};						//Структура фио
struct date {
	int day = 0;
	char month[10];
	int age = 0;
};						//Структура даты
struct notebook {
	fio fio;
	date date;
	char numphone[15];
};					//Структура фио,даты и номера телефона
notebook *zap(int sz);								//Заполнение книги
notebook *addcont(int sz, notebook *ar);				//Добавление контакта
notebook *delcont(int sz, notebook *ar);				//Удаление контакта
void find(int sz, notebook *ar, int numeral);			//Поиск по книге
void sort(int sz, notebook *ar, int numeral);			//Сортировка книги по алфавиту
void zamenastr(notebook *ar, int a, int b);			//Замена строк(функция для сортировки)
void fioout(fio f);				//Вывод фио
void dateout(date d);			//Вывод даты
void noteout(notebook n);		//Вывод всей книги
void nameinf(int sz,notebook *ar);	//Поиск информации по имени
void corectnum();					//Проверка правильности ввода номера телефона
void cornumscanf();					//Проверка номера телефона с помощью scanf

struct f {
	char *fam = new char[10];
	char *name = new char[10];
	char *otch = new char[10];
};
struct d {
	int day = 0;
	char *month = new char[10];
	int age = 0;
};
struct note {
	f fio;
	d date;
	char *numphone=new char[15];
};

void infaddfile(notebook masbook);

struct famil {										//ТЕСТОВЫЕ СТРУКТУРЫ
	char fam[100];
	char name[10];
	char otch[100];
};						//Структура фио
struct dataa {
	int day = 0;
	char month[10];
	int age = 0;
};						//Структура даты
struct mybook {
	famil fio;
	dataa date;
	char numphone[15];
};
void infizfile(mybook masbook);
int simvolvchislo(char mas[50], int sz);
void infaddtobook(int sz,notebook *masbook);