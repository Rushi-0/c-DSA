#include <iostream> 
using namespace std;

int main() {

	int row, col;
	cout << "Row and Col: ";
	cin >> row >> col;

	int arr[row][col];
	cout << "elements: " << endl;
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cin >> arr[i][j];
		}
	}

	int target;
	cout << "Target: ";
	cin >> target;
	bool found = false;
	int r=0, c=col-1;
	while (r < row and c >=0) {
		if (arr[r][c] == target) {
			found = true;
			break;
		}
		else if (arr[r][c] > target) {
			c--;
		}
		else {
			c++;
		}
	}


	if(found) {
		cout << "Found" << endl;
	}	
	else {
		cout << "Not Found" << endl;
	}



	
	// for (int i=0; i<row; i++) {
	// 	for (int j=0; j<col; j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }



}