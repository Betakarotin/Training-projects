#include<iostream>
using namespace std;

class human
{
private:
	int eyes, ears, hands, fingers, legs, nose, teeth;

public:
	human(int ey = 2, int ea = 2, int ha = 2, int fi = 20, int le = 2, int no = 1, int te = 30)
	{
		eyes = ey, ears = ea, hands = ha, fingers = fi, legs = le, nose = no, teeth = te;

	}

	void set_human(int ey, int ea, int ha, int fi, int le, int no, int te)
	{
		eyes = ey, ears = ea, hands = ha, fingers = fi, legs = le, nose = no, teeth = te;

	}
	void out() {
		printf_s("Name:\nEyes:%d,Ears:%d,Hands:%d,Fingers:%d,Legs:%d,Nose:%d,Teeth:%d\n", eyes, ears, hands, fingers, legs, nose, teeth);

	}

};


human *AddElem(human *arr, int &sz)
{
	sz = sz + 1;
	human *arrnew = new human[sz];
	for (int i = 0; i < sz-1; i++)
	{
		arrnew[i] = arr[i];
	}
	arrnew[sz-1].set_human(rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 33);


	return arrnew;
}

human *DelElem(human *arr, int delitem, int &sz)
{
	sz = sz - 1;
	human *arrnew = new human[sz];
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
	int delitem = 0;
	cin >> sz;

	human *Arr = new human[sz];
	

	for (int i = 0; i < sz; i++)
	{
		Arr[i].set_human(rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 3, rand() % 33);
	}


	
	for (int i = 0; i < sz; i++)
	{
		Arr[i].out();
	}
	cout << endl;
	

	/*Arr = AddElem(Arr, sz);
	for (int i = 0; i < sz; i++)
	{
		Arr[i].out();
	}
	cout << endl;*/
	
	cin >> delitem;

	Arr = DelElem(Arr,delitem,sz);
	for (int i = 0; i < sz; i++)
	{
		Arr[i].out();
	}
	cout << endl; 



}