#include"Header.h"

int main()
{
	system("color 90");
	
	
	char way1[30] = { "D:/*.*" };
	char way2[30] = { "D:/*.*" };

	char **arr1 = new char*[5];
	char **arr2 = new char*[5];
	
	int counter1 = FileCounter(way1);	//Счетчик кол-ва файлов 
	int counter2 = counter1;

	//Создание массивов
	for (int i = 0; i < counter1; i++)
		arr1[i] = new char[10];

	for (int i = 0; i < counter2; i++)
		arr2[i] = new char[10];

	
	
	//////////////
	int activeItem1 = 0;
	int activeItem2 = 0;


	AddFileNamesInMas(way1, counter1, arr1);		//Добавление всех файлов в массив
	AddFileNamesInMas(way2, counter2, arr2);	//Добавление всех файлов в массив
	
	CoutSecondWindow(way2, counter2, arr2);
	
	Cursor1(way1,way2, arr1, counter1, activeItem1,activeItem2);
	Cursor2(way1,way2, arr2, counter2,activeItem1, activeItem2);
	


}