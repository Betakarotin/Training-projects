#include<iostream>
using namespace std;

void main() {
	int x;
	cin >> x;
	int *arr = new int[x];
	for (int i = 0; i < x; i++)
		arr[i] = rand() % 89 + 10;

	for (int i = 0; i < x; i++)
		cout << arr[i] << " ";
	cout << endl;


	///////////

	int n, k;
	cin >> n >> k;
	int *ar = new int[x - k];
	for (int ne = 0, sta = 0; ne < x - k; ne++) {
		if (sta != n) {
			ar[ne] = arr[sta];
			sta++;

		}


		else {
			sta = sta + k;
			ne--;

		}
	}


	for (int i = 0; i < x - k; i++)
		cout << ar[i] << " ";
	cout << endl;
}