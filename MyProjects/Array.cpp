#include<iostream>
#include<ctime>
using namespace std;

class Array
{
private:
	int *Num;
	int size,ressize;	
public:
	Array()
	{
		Num = new int[1];
	}
	
	void create_arr(int sz)
	{
		delete[] Num;
		Num = new int[sz];
	}

	void set_Array(int sz)
	{
		for (int i = 0; i < sz; i++)
		{
			cin>>Num[i];
		}
	}

	void set_randomarray(int sz)
	{
		for (int i = 0; i < sz; i++)
			Num[i] = rand() % 89 + 10;
	}

	void get_Array(int sz)
	{
		for (int i = 0; i < sz; i++)
		{
			printf_s("%d", Num[i]);
		}
	}

	void sort(int sz)
	{
		for (int q = 0; q < sz; q++)
		{
			for (int i = 0; i < sz; i++)
			{
				if (this->Num[i] > this->Num[i + 1])
				{
					int x = 0;
					x = this->Num[i + 1];
					this->Num[i + 1] = this->Num[i];
					this->Num[i] = x;
				}
			}
		}
	
	}
	void max_min(int sz)
	{
		int max = 0, min = 0;
		for (int i = 0; i < sz; i++)
		{
			if (this->Num[i] > this->Num[i + 1])
			{
				max = this->Num[i];
			}
		}
		
		for (int i = 0; i < sz; i++)
		{
			if (this->Num[i] < this->Num[i + 1])
			{
				min = this->Num[i];
			}
		}
		
	}

	Array(Array &obj)
	{

	}

	~Array()
	{
		delete[]Num;
	}

	void Size(int sz)
	{
		size = sz;
	}

	void twosize(int sz1,int sz2)
	{
		ressize = sz1 + sz2;
	}

	int operator[](int i)
	{
		return Num[i];
	}

	Array operator=(int sz)
	{
		Array temp;
		temp.create_arr(sz);
		for (int i = 0; i < sz; i++)
		
			temp.Num[i] = this->Num[i];
		return temp;
		
	}

	Array operator+(Array &obj)
	{
		Array temp;
		temp.create_arr(ressize);
		for (int i = 0; i < size; i++)
		{
			temp.Num[i] = Num[i];
		}
		for (int i = size; i < ressize; i++)
		{
			temp.Num[i] = obj.Num[i];
		}
		
		return temp;
	}

	Array operator++()
	{
		size = size + 1;
		Array temp;
		temp.create_arr(size);
		for (int i = 0; i < size - 1; i++)
		{
			temp.Num[i] = Num[i];
		}
		temp.Num[size - 1] = rand() % 89 + 10;
	}

	Array operator--()
	{
		size = size - 1;
		Array temp;
		temp.create_arr(size);
		for (int i = 0; i < size; i++)
		{
			temp.Num[i] = Num[i];
		}
	}
};

Array *AddElem(Array *arr, int &sz)
{
	sz = sz + 1;
	Array *arrnew = new Array[sz];
	for (int i = 0; i < sz - 1; i++)
	{
		arrnew[i] = arr[i];
	}
	arrnew[sz - 1].set_Array(rand() % 1 + 100);


	return arrnew;
}

Array *DelElem(Array *arr, int delitem, int &sz)
{
	sz = sz - 1;
	Array *arrnew = new Array[sz];
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
	srand((unsigned int)time(NULL));
	int sz = 0;
	cin >> sz;
	Array ob;
	ob.Size(sz);

	ob.create_arr(sz);	//создание массива
	ob.set_randomarray(sz);	//заполнение рандомом
	int num = ob[2];	//Перегрузка []
	Array copy;			//Перегрузка =
	copy = ob;

	Array obj;
	int siz = 0;
	cin >> siz;
	obj.Size(siz);
	ob.create_arr(siz);	//создание массива
	ob.set_randomarray(siz);	//заполнение рандомом

	ob.twosize(sz, siz);
	Array res;
	res = ob + obj;
	
}
