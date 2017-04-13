#include <iostream>
using namespace std;
void main(){

	const int sz = 5;
	int arr[sz] = {7, 4 , 6, 3, 1};

	for(int i = 0; i < sz; i++){
		cout << " "<< arr[i];
	}

	cout << endl << "========================" << endl;

	for (int b = 0, k = sz; b < sz - 1; b++,k--){
		for ( int i = 0; i < k - 1; i++){
			if ( arr[i] > arr[i + 1]){
				int j = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = j;
			}

}