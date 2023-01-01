#include<iostream>
using namespace std;
int main() {
	int x, y, arr1[100][100], a, b, arr2[100][100];
	cout << "enter 1th matrix rows" << endl;
	cin >> x;
	cout << "enter 1th matix columns " << endl;
	cin >> y;
	cout << "enter 2th matrix rows" << endl;
	cin >> a;
	cout << "enter 2th matix columns " << endl;
	cin >> b;
	cout << " enter elements to 1th matrix " << endl;
	for (int i = 0; i < x; i++) {
		for (int p = 0; p < y; p++) {
			cout << "[" << i << "]" << "[" << p << "]" << "=";
			cin >> arr1[i][p];
		}
	}
	cout << " enter elements to 2th matrix " << endl;
	for (int g = 0; g < x; g++) {
		for (int j = 0; j < y; j++) {
			cout << "[" << g << "]" << "[" << j << "]" << "=";
			cin >> arr2[g][j];
		}
	}
	

}