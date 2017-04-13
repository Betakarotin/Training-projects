#include<iostream>
using namespace std;

void rim(int x) {
	char I = 'I'; //1
	char V = 'V'; //5
	char X = 'X'; //10
	char XL = 'XL'; //40
	char L = 'L'; //50
	char XC = 'XC'; //90
	char C = 'C'; //100
	char CD = 'CD'; //400
	char D = 'D'; //500
	char CM = 'CM'; //900
	char M = 'M'; //1000
	int a, b, c, d;

	if (x >= 1000) {
		a = x % 1000;
		a = a % 100;
		a = a % 10;		//ÅÄÈÍÈÖÛ
		cout << a << endl;
		b = x % 100;	//ÄÅÑßÒÊÈ
		b = b / 10;
		cout << b << endl;
		c = x % 1000;		//ÑÎÒÍÈ
		c = c / 100;
		cout << c << endl;
		d = (x - a) / 1000;		// ÒÛÑß×È
		cout << d << endl;
		for (int q; q < a;) {

		}
	}

}

void main() {
	int x;
	cin >> x;
	rim(x);
}