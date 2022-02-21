#include <iostream>
using namespace std; 

int main() {

	int row = 3;
	int col = 3;
	int arr[row][col] = {{1,2,3}, 
						 {4,5,6}, 
						 {7,8,9}};

	
	// for (int i=0; i<row; i++) {
	// 	for (int j=i; j<col; j++) {
	// 		int temp = arr[i][j];
	// 		arr[i][j] = arr[j][i];
	// 		arr[j][i] = temp;
	// 	}
	// 	cout << "\n";
	// }

	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}


	cout << arr[1][0];



	return 0;
}