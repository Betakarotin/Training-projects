#include<iostream>
using namespace std;

class People
{
private:
	int age, marry, height, weight;
	char surname[10], name[10], secondname[10],sex[10];
public:
	People(int a=28,int mar=1,int hei=168,int wei=60,char sur[10]="Makarenko",char na[10]="Denis",char secondna[10]="Sergei",char sex[10]="male")
	{
		age = a, marry = mar, height = hei, weight = wei;
		strcpy_s(surname,10, sur);
		strcpy_s(name,10, na);
		strcpy_s(secondname,10, secondna);
	}


public:
	void set_people(int a, int mar, int hei, int wei, char sur[10], char na[10], char secondna[10], char sex[10] )
	{
		age = a, marry = mar, height = hei, weight = wei;
		strcpy_s(surname,10, sur);
		strcpy_s(name,10, na);
		strcpy_s(secondname,10, secondna);
	}

	void get_people()
	{
		printf_s("Surname:%s Name:%s Secondname:%s Age:%d Marry:%d Height:%d Weight:%d Sex:%s", surname, name, secondname, age, marry, height, weight, sex);
	}
};



class Flat
{
private:
	int entrance, floor, numberrooms, flatnumber;
public:
	People *Chelovek = new People[1];
	Flat(int ent = 1, int flo = 2, int numro = 3, int flnum = 54)
	{
		entrance = ent, floor = flo, numberrooms = numro, flatnumber = flnum;
	}

	void set_flat(int ent , int flo , int numro , int flnum )
	{
		entrance = ent, floor = flo, numberrooms = numro, flatnumber = flnum;
	}

	void get_flat()
	{
		printf_s("Entrance:%d Floor:%d Flatnumber:%d Numberrooms:%d",entrance,floor,numberrooms,flatnumber);
	}
};

class Home
{
private:
	int numberhome, kolvoentrance, kolvofloor;
	char city[10], street[15];
public:
	Flat *Kvartira = new Flat[1];
	Home(int numho = 125, int kolent = 11, int kolflo = 9, char ci[10] = "Kiev", char str[15] = "Studentska")
	{
		numberhome = numho, kolvoentrance = kolent, kolvofloor = kolflo;
		strcpy_s(city, 10, ci);
		strcpy_s(street, 15, str);
	}

	void set_home(int numho, int kolent, int kolflo, char ci[10], char str[15])
	{
		numberhome = numho, kolvoentrance = kolent, kolvofloor = kolflo;
		strcpy_s(city, 10, ci);
		strcpy_s(street, 15, str);
	}
};

void main()
{
	int sz = 0;
	cin >> sz;
	char **name = new char*[sz];
	char **surname = new char*[sz];
	char **secondname = new char*[sz];
	char **sex = new char*[sz];
	People *chel = new People[sz];

	
	int sexint = 0;

	for (int i = 0; i < sz; i++)
	{
		sexint = rand() % 2;
		if (sexint == 1)
			sex[i] = "Male";
		else
			sex[i] = "Female";
	}

	for (int i = 0; i < sz; i++)
	{
		if(strcmp(sex[i],"Male")==0)
			switch (i)
			{
				case 0:name[i] = "Adam";
				case 1:name[i] = "Albert";
				case 2:name[i] = "Artyr";
				case 3:name[i] = "Bogdan";
				case 4:name[i] = "Boris";
				case 5:name[i] = "Vadim";
				case 6:name[i] = "Vladislav";
				case 7:name[i] = "Garry";
				case 8:name[i] = "Evgenyi";
				case 9:name[i] = "Dmitriy";
			}
		else
			switch (i)
			{
				case 0:name[i] = "Alexandra";
				case 1:name[i] = "Alena";
				case 2:name[i] = "Alisa";
				case 3:name[i] = "Bella";
				case 4:name[i] = "Valeriya";
				case 5:name[i] = "Vera";
				case 6:name[i] = "Darina";
				case 7:name[i] = "Diana";
				case 8:name[i] = "Kira";
				case 9:name[i] = "Olga";
			}
			
	}

	for (int i = 0; i < sz; i++)
	{
		if (strcmp(sex[i], "Male") == 0)
			switch (i)
			{
			case 0:surname[i] = "Ivanov";
			case 1:surname[i] = "Smirnov";
			case 2:surname[i] = "Kyznecov";
			case 3:surname[i] = "Popov";
			case 4:surname[i] = "Vasilev";
			case 5:surname[i] = "Pavlov";
			case 6:surname[i] = "Kozlov";
			case 7:surname[i] = "Orlov";
			case 8:surname[i] = "Nikitin";
			case 9:surname[i] = "Zaycev";
			}
		else
			switch (i)
			{
			case 0:surname[i] = "Ivanova";
			case 1:surname[i] = "Smirnova";
			case 2:surname[i] = "Kyznecova";
			case 3:surname[i] = "Popova";
			case 4:surname[i] = "Vasileva";
			case 5:surname[i] = "Pavlova";
			case 6:surname[i] = "Kozlova";
			case 7:surname[i] = "Orlova";
			case 8:surname[i] = "Nikitina";
			case 9:surname[i] = "Zayceva";
			}

	}
	
	for (int i = 0; i < sz; i++)
	{
		if (strcmp(sex[i], "Male") == 0)
			switch (i)
			{
			case 0:secondname[i] = "Adamovich";
			case 1:secondname[i] = "Egorovich";
			case 2:secondname[i] = "Timyrovich";
			case 3:secondname[i] = "Yrievich";
			case 4:secondname[i] = "Romanovich";
			case 5:secondname[i] = "Petrovich";
			case 6:secondname[i] = "Olegovich";
			case 7:secondname[i] = "Victorovich";
			case 8:secondname[i] = "Nicolaevich";
			case 9:secondname[i] = "Vladimirovich";
			}
		else
			switch (i)
			{
			case 0:secondname[i] = "Sergeevna";
			case 1:secondname[i] = "Olegovna";
			case 2:secondname[i] = "Sergeevna";
			case 3:secondname[i] = "Vladimirovna";
			case 4:secondname[i] = "Victorovna";
			case 5:secondname[i] = "Artemovna";
			case 6:secondname[i] = "Andreevna";
			case 7:secondname[i] = "Petrovna";
			case 8:secondname[i] = "Evgenievna";
			case 9:secondname[i] = "Danilovna";
			}

	}

	for (int i = 0; i < sz; i++)
	{
		
		chel[i].set_people(rand() % 18 + 80, rand() % 2, rand() % 160 + 220, rand() % 30 + 120, surname[i], name[i], secondname[i], sex[i]);
	}

	for (int i = 0; i < sz; i++)
	{
		chel[i].get_people();
	}

}