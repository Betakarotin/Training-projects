#include<iostream>
using namespace std;

class Reservoid
{
private:
	char name[10], tips[10];
	int length,width , deep;

public:
	Reservoid(int len = 214, int wid = 329, int de = 23, char na[10] = "Baikal",char ti[10]="lake")
	{
		length = len, width = wid, deep = de;
		strcpy_s(name, 10, na);
		strcpy_s(tips, 10, ti);
	}

	void set_reservoid(int len, int wid, int de, char na[10],char ti[10])
	{
		length = len, width = wid, deep = de;
		strcpy_s(name, 10, na);
		strcpy_s(tips, 10, ti);
	}


	int capacity(int len, int wid, int de)
	{
		int capacity = 0;
		capacity = len*wid*de;

		return capacity;
	}

	int area(int len, int wid)
	{
		int area = 0;
		area = len*wid;

		return area;
	}

	char *reservtips(char tip1[10], char tip2[10])
	{
		char restip[20];
		int res = strcmp(tip1, tip2);
		if (res == 0)
			strcpy_s(restip, 20, tip1);
		else
			strcpy_s(restip, 20, "Razniy tip");
		
		return restip;
	}

	int areaonetips(int len, int wid)
	{
		int area1=0, area2 = 0;
		area1 = length*width;
		area2 = len*wid;
		if (area1 > area2)
			return area1;
		else
			return area2;
	}

};

Reservoid *AddElem(Reservoid *arr, int &sz)
{
	sz = sz + 1;
	Reservoid *arrnew = new Reservoid[sz];
	for (int i = 0; i < sz - 1; i++)
	{
		arrnew[i] = arr[i];
	}
	arrnew[sz - 1].set_reservoid(rand() % 50 + 400, rand() % 50 + 400, rand() % 5 + 40, "NewReservoid", "sea");


	return arrnew;
}

Reservoid *DelElem(Reservoid *arr, int delitem, int &sz)
{
	sz = sz - 1;
	Reservoid *arrnew = new Reservoid[sz];
	int q = 0;
	for (int i = 0; i < sz; i++)
	{

		if (delitem != i)
		{
			arrnew[q] = arr[i];
			q++;
		}


	}

	return arrnew;
}

void main()
{
	int sz,delitem=0;
	cin >> sz;
	Reservoid *arr = new Reservoid[sz];


}
