#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct fio {
	char fam[100];
	char name[10];
	char otch[100];
};						//��������� ���
struct date {
	int day = 0;
	char month[10];
	int age = 0;
};						//��������� ����
struct notebook {
	fio fio;
	date date;
	char numphone[15];
};					//��������� ���,���� � ������ ��������
notebook *zap(int sz);								//���������� �����
notebook *addcont(int sz, notebook *ar);				//���������� ��������
notebook *delcont(int sz, notebook *ar);				//�������� ��������
void find(int sz, notebook *ar, int numeral);			//����� �� �����
void sort(int sz, notebook *ar, int numeral);			//���������� ����� �� ��������
void zamenastr(notebook *ar, int a, int b);			//������ �����(������� ��� ����������)
void fioout(fio f);				//����� ���
void dateout(date d);			//����� ����
void noteout(notebook n);		//����� ���� �����
void nameinf(int sz,notebook *ar);	//����� ���������� �� �����
void corectnum();					//�������� ������������ ����� ������ ��������
void cornumscanf();					//�������� ������ �������� � ������� scanf

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

struct famil {										//�������� ���������
	char fam[100];
	char name[10];
	char otch[100];
};						//��������� ���
struct dataa {
	int day = 0;
	char month[10];
	int age = 0;
};						//��������� ����
struct mybook {
	famil fio;
	dataa date;
	char numphone[15];
};
void infizfile(mybook masbook);
int simvolvchislo(char mas[50], int sz);
void infaddtobook(int sz,notebook *masbook);