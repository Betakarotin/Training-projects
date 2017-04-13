#include"Header.h"
#define CIN_FLUSH if (std::cin.peek()) std::cin.ignore()


int FileCounter(char *way)								//Кол-во файлов в папке
{
	int counter = 0;
	_finddata_t  c_file;
	intptr_t h;
	h = _findfirst(way, &c_file);
	if (h != -1)
	{
		do
		{
			counter++;
		} while (_findnext(h, &c_file) == 0);
	}
	_findclose(h);

	return counter;
}


void AddFileNamesInMas(char *way,int counter,char **arr)
{
	

	_finddata_t  q_file;
	intptr_t w;
	w = _findfirst(way, &q_file);
	for (int i = 1; i < counter; i++)
	{
	
		strcpy(arr[i], q_file.name);	//Добавление имени файла в строку
		
		
		_findnext(w, &q_file);

	
	}
	_findclose(w);

}

void Cursor1(char *way1,char *way2, char **Filename, int counter,int activeItem1,int activeItem2)
{
	HANDLE hStdOut1 = GetStdHandle(STD_OUTPUT_HANDLE);

	int activeColor = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
	int defaultColor = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE;



	COORD pos;


	_finddata_t  c_file;
	intptr_t h;
	h = _findfirst(way1, &c_file);

	for (int i = 1; i < counter; i++) {
		if (i == activeItem1)
			SetConsoleTextAttribute(hStdOut1, activeColor);
		else
			SetConsoleTextAttribute(hStdOut1, defaultColor);


		pos.X = 3;
		pos.Y = 6 + i;
		SetConsoleCursorPosition(hStdOut1, pos);




		if ((c_file.attrib & _A_SUBDIR) == _A_SUBDIR)
			cout << "<DIR>" << Filename[i] << "  " << endl;
		else
			cout << Filename[i] << "  " << c_file.size << endl;

		_findnext(h, &c_file);

	}
	_findclose(h);
	ButtonsLeft(way1,way2, counter, Filename,activeItem1, activeItem2);	//Реакция на нажатие клавиш

}
void Cursor2(char *way1,char *way2, char **Filename, int counter,int activeItem1, int activeItem2)
{
	HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);

	int activeColor = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
	int defaultColor = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE;



	COORD pos;


	_finddata_t  c_file;
	intptr_t h;
	h = _findfirst(way2, &c_file);

	for (int i = 1; i < counter; i++) {
		if (i == activeItem2)
			SetConsoleTextAttribute(hStdOut2, activeColor);
		else
			SetConsoleTextAttribute(hStdOut2, defaultColor);


		pos.X = 60;
		pos.Y = 6 + i;
		SetConsoleCursorPosition(hStdOut2, pos);




		if ((c_file.attrib & _A_SUBDIR) == _A_SUBDIR)
			cout << "<DIR>" << Filename[i] << "  " << endl;
		else
			cout << Filename[i] << "  " << c_file.size << endl;

		_findnext(h, &c_file);

	}
	_findclose(h);
	ButtonsRight(way1,way2, counter, Filename,activeItem1, activeItem2);	//Реакция на нажатие клавиш

}

void ButtonsLeft(char *way1,char *way2,int counter,char **Filename,int activeItem1,int activeItem2)
{

	char changeway[30];
	strcpy(changeway, way1);
	
		/*int ForButtonBack = 0;*/ //Сравнение строки way с D:/*.*  Узнать,нахожусь ли я в диске D,в котором нету кнопки Back

	/*char *findchar = strstr(changeway, "*");
	char *findchar1 = strstr(changeway, "/");
	char *res = strcat(findchar, Filename[activeItem]);
	cout << res;*/
	char strtest2[100];
	char strtest1[100];
	char strtest3[100];
	

	
	
	_getch(); 
		int code = _getch();
		cout << code;


		switch (code) {
		case 72: {
			activeItem1--;
			if (activeItem1 < 0) activeItem1 = 0;
			Cursor1(way1,way2, Filename, counter,activeItem1,activeItem1);
			cout << 72;
			
		}break;
		case 80: {
			activeItem1++;
			if (activeItem1 > counter - 1) activeItem1 = counter - 1;
			Cursor1(way1, way2, Filename, counter, activeItem1, activeItem1);
			cout << 80;
			
		}break;
		case 13: {

			//Делаю копирование каждого указателя, поскольку в эти указатели записывается всякая хрень
			char *strpart2 = strstr(changeway, "*");
			strcpy(strtest2, strpart2);			// *.*

			char *strpart1 = strtok(changeway, "*");
			strcpy(strtest1, strpart1);			// D:/

			char *strpart3 = strcat(strpart1, Filename[activeItem1]);
			strcpy(strtest3, strpart3);			// D:/ Название открываемой папки

			

			int res = _chdir(strtest3);
			if (res==0) {
				strcat(strtest3, "/");				// D:/ Название открываемой папки /
				strcat(strtest3, strtest2);			// D:/ Название открываемой папки / *.*
				
				strcpy(way1, strtest3);				//Записываем в свой путь открываемую папку
				
				Cursor1(way1, way2, Filename, counter, activeItem1, activeItem1); //Функция поиска всех файлов в открываемой папке
			}
		}break;
		case 77: {
			//Вправо
			activeItem1 = 0;
			Cursor2(way1, way2, Filename, counter, activeItem1, activeItem1);/////Возвращаемся в правую часть
		}break;
		}
		
	}

void ButtonsRight(char *way1,char *way2, int counter, char **Filename, int activeItem1,int activeItem2)
{

	char changeway[30];
	strcpy(changeway, way2);

	/*int ForButtonBack = 0;*/ //Сравнение строки way с D:/*.*  Узнать,нахожусь ли я в диске D,в котором нету кнопки Back

							   /*char *findchar = strstr(changeway, "*");
							   char *findchar1 = strstr(changeway, "/");
							   char *res = strcat(findchar, Filename[activeItem]);
							   cout << res;*/
	char strtest2[100];
	char strtest1[100];
	char strtest3[100];




	_getch();
	int code = _getch();
	cout << code;


	switch (code) {
	case 72: {
		activeItem2--;
		if (activeItem2 < 0) activeItem2 = 0;
		Cursor2(way1, way2, Filename, counter, activeItem1, activeItem1);
		cout << 72;

	}break;
	case 80: {
		activeItem2++;
		if (activeItem2 > counter - 1) activeItem2 = counter - 1;
		Cursor2(way1, way2, Filename, counter, activeItem1, activeItem1);
		cout << 80;

	}break;
	case 13: {

		//Делаю копирование каждого указателя, поскольку в эти указатели записывается всякая хрень
		char *strpart2 = strstr(changeway, "*");
		strcpy(strtest2, strpart2);			// *.*

		char *strpart1 = strtok(changeway, "*");
		strcpy(strtest1, strpart1);			// D:/

		char *strpart3 = strcat(strpart1, Filename[activeItem2]);
		strcpy(strtest3, strpart3);			// D:/ Название открываемой папки



		int res = _chdir(strtest3);
		if (res == 0) {
			strcat(strtest3, "/");				// D:/ Название открываемой папки /
			strcat(strtest3, strtest2);			// D:/ Название открываемой папки / *.*

			strcpy(way2, strtest3);				//Записываем в свой путь открываемую папку

			Cursor2(way1, way2, Filename, counter, activeItem1, activeItem1);//Функция поиска всех файлов в открываемой папке
		}
	}break;
	case 75: {
		//Влево
		activeItem2 = 0;
		Cursor1(way1, way2, Filename, counter, activeItem1, activeItem1);/////Возвращаемся в левую часть
	}break;
	case 133: {
		//F11
		if (activeItem1 != 0)
		{
			int DirOrFile=_chdir(Filename[activeItem1]);
			if (DirOrFile == -1)
			{
				CopyFiles(activeItem1,activeItem2, way1, way2, Filename);
			}
		}
		else
			if (activeItem2 != 0)
			{
			int DirOrFile = _chdir(Filename[activeItem2]);
			if (DirOrFile == -1)
			{
				CopyFiles(activeItem1,activeItem2, way1, way2, Filename);
			}
			}
	}break;
	}

}

	
void CoutSecondWindow(char *way,int counter,char **Filename)
{

	HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD poss;


	_finddata_t  c_file;
	intptr_t h;
	h = _findfirst(way, &c_file);
	
	int defaultColor = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE;

	for (int i = 1; i < counter; i++) {
		
			SetConsoleTextAttribute(hStdOut2, defaultColor);


		poss.X = 60;
		poss.Y = 6 + i;
		SetConsoleCursorPosition(hStdOut2, poss);




		if ((c_file.attrib & _A_SUBDIR) == _A_SUBDIR)
			cout << "<DIR>" << Filename[i] << "  " << endl;
		else
			cout << Filename[i] << "  " << c_file.size << endl;

		_findnext(h, &c_file);

	}
	_findclose(h);
}

void CopyFiles(int activeItem1,int activeItem2,char *way1,char *way2,char **Filename)
{
	char changeway1[30];
	char changeway2[30];
	strcpy(changeway1, way1);
	strcpy(changeway2, way2);
	char buf1[30];
	char buf2[30];
	FILE *fi;
	FILE *fp;

	char strtest1[30];
	char strtest2[30];

	if (activeItem1 != 0)
	{
	
	char *strpart1 = strtok(changeway1, "*");
	strcpy(strtest1, strpart1);			// D:/

	char *strpart2 = strcat(strpart1, Filename[activeItem1]);
	strcpy(strtest2, strpart2);			// D:/ Название открываемого файла

	strcpy(buf1, Filename[activeItem1]);
	
	fi = fopen(buf1, "r");
	if (fi == NULL)
	{
		cout << "Невозможно открыть файл\n";	
	}

	fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		cout << "Невозможно открыть файл\n";
	
	}
	const int LENGTH = 1;
	char str[LENGTH];
	while (!feof(fp))
	{
		
		fread(str, LENGTH, 1, fp);
		
		fwrite(str, LENGTH, 1, fi);
	}

	}


	
		

	

	
}