#include <iostream> 
using namespace std;

int main() {

	int n1=3, n2=2, n3=3;

	int arr1[n1][n2] = {{1,2}, 
						{3,4},
						{5,6}};

	int arr2[n2][n3] = {{1,2,3}, 
						{4,5,6}};
	int ans[n1][n3];

	for (int i=0; i<n1; i++) {
		for (int j=0; j<n3; j++) {
			ans[i][j] = 0;
		}
	}

	for (int i=0; i<n1; i++) {
		for (int j=0; j<n3; j++) {
			for (int k=0; k<n2; k++) {
				ans[i][j] = arr1[i][k]*arr2[k][j];
			}
		}
	}

	for (int i=0; i<n1; i++) {
		for (int j=0; j<n3; j++) {
			cout << ans[i][j] << " ";
		}	
		cout << "\n";
	}



	// for (int i=0; i<n1; i++) {
	// 	for (int j=0; j<n2; j++) {
	// 		cout << arr1[i][j] << " ";
	// 	}	
	// 	cout << "\n";
	// }

	// cout << "\n";
	// cout << "\n";

	// for (int i=0; i<n2; i++) {
	// 	for (int j=0; j<n3; j++) {
	// 		cout << arr2[i][j] << " ";
	// 	}	
	// 	cout << "\n";
	// }
					
	

	return 0;
}