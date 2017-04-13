#include <iostream>
using namespace std;
void main()
{
	const int sz = 5;

	int a[sz] = {41,67,34,0,69};
	// заполнение массива
	//	for(int i=0; i<sz; i++)
	//	a[i] = rand() % 100;
	// распечатка массива
	for(int i=0; i<sz; i++)
		cout << a[i]<<"\t";
	cout << "\n";

	cout << "=========================================" << endl;

	
	// сортировка массива методом вставки
	int j=0;
	for (int i=1; i < sz; i++)
	{  
		int x = a[i]; //извлекаем элемент
		for ( j=i-1; j>=0 && a[j] > x; j--){
			a[j+1] = a[j]; 
		}
		a[j+1] = x;//вставка в определенную поз.
		for (int i = 0; i<sz; i++)
			cout << a[i] << "\t";
		cout << "\n";
		cout << "=========================================" << endl;

	}


	cout << "result: ";
	for(int k=0; k<sz; k++)
		cout << a[k]<<"\t";
	cout << "\n";



}
