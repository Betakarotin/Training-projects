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

int FileCounter(char *way);			//счетчик кол-ва файлов в папке

void AddFileNamesInMas(char *way, int counter, char **arr); //Добавление всех файлов в массив
void CoutSecondWindow(char *way, int counter, char **Filename); //Вывод на экран 2 окошко


void Cursor1(char *way1, char *way2, char **Filename, int counter, int activeItem1, int activeItem2);		//Подсветка выдел. файла
void Cursor2(char *way1, char *way2, char **Filename, int counter, int activeItem1, int activeItem2);

void ButtonsRight(char *way1, char *way2, int counter, char **Filename, int activeItem1, int activeItem2);		//Реакция на нажатие клавиш
void ButtonsLeft(char *way1, char *way2, int counter, char **Filename, int activeItem1, int activeItem2);

void CopyFiles(int activeItem1, int activeItem2, char *way1, char *way2, char **Filename);	//Копирование файлов