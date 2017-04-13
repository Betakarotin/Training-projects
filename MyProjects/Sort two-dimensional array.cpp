#include<iostream>
#include<ctime>
using namespace std;

void zap(int **mas, int str, int col) {

	for (int i = 0; i < str; i++)
		mas[i] = new int[col];

	for (int q = 0; q < str; q++)
		for (int i = 0; i < col; i++)
			mas[q][i] = rand() % 9 + 1;




}
int sum(int *ar, int sz) {
	int sum = 0;
	for (int i = 0; i < sz; i++)
		sum = sum + ar[i];		//sum+=ar[i]

	return sum;
}
void out(int **mas, int str, int col) {
	for (int q = 0; q < str; q++) {
		for (int i = 0; i < col; i++) {
			cout << mas[q][i] << " ";
		}

		cout << "\t" << sum(mas[q], col) << endl;
	}

}




void sort(int **mas, int str, int col) {

	int summa = 0;
	int t = sum(mas[0], col);


	for (int q = 0; q<str; q++)


		for (int i = 1; i < str; i++) {

			summa = sum(mas[i], col);
			if (summa < t) {
				int *qwe = mas[i];
				mas[i] = mas[i - 1];
				mas[i - 1] = qwe;

			}


			t = summa;
		}


}


void main() {
	srand((unsigned int)time(NULL));
	int str = 0, col = 0, sz = 0;
	cin >> str >> col;



	int **mas = new int *[str];

	zap(mas, str, col);
	out(mas, str, col);
	sort(mas, str, col);
	cout << endl;
	out(mas, str, col);


}