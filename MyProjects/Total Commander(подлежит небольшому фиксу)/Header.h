#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstdlib>
#include <iomanip>
#include <windows.h>

#include <io.h>
#include <time.h>
#include <stdio.h>

#include <windows.h>
#include <conio.h>
#include <direct.h>
#include <string>


using namespace std;

int FileCounter(char *way);			//������� ���-�� ������ � �����

void AddFileNamesInMas(char *way, int counter, char **arr); //���������� ���� ������ � ������
void CoutSecondWindow(char *way, int counter, char **Filename); //����� �� ����� 2 ������


void Cursor1(char *way1, char *way2, char **Filename, int counter, int activeItem1, int activeItem2);		//��������� �����. �����
void Cursor2(char *way1, char *way2, char **Filename, int counter, int activeItem1, int activeItem2);

void ButtonsRight(char *way1, char *way2, int counter, char **Filename, int activeItem1, int activeItem2);		//������� �� ������� ������
void ButtonsLeft(char *way1, char *way2, int counter, char **Filename, int activeItem1, int activeItem2);

void CopyFiles(int activeItem1, int activeItem2, char *way1, char *way2, char **Filename);	//����������� ������