#include <iostream>
using namespace std;

int main() {

	cout << "--- This is 2D Array --- " << endl;

	int row, col;
	cout << "enter row and cols: ";
	cin >> row >> col;

	int arr[row][col];

	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
