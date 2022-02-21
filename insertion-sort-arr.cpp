#include <iostream>
using namespace std;

int main() {

	int size;
	cout << "Size: ";
	cin >> size;
	int arr[size];
	cout << "Elements: ";
	for (int i=0;i<size;i++) {
		cin >> arr[i];
	}

	for (int i=1; i<size; i++) {
		int current = arr[i];
		int j=i-1
		while(arr[j] > current && j>=0) {
			arr[j+1] = arr[j]
			j--;
		}
		arrr[j+1] = current;
	}

	

	return 0;
}