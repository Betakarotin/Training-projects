#include<iostream>
using namespace std;

class Array
{
private:
	int *Num;
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
	int sz = 0;
	cin >> sz;
	Array ob;
	ob.create_arr(sz);
	
	ob.set_Array(sz);
	ob.get_Array(sz);
}