#include <iostream>
using namespace std;

int selectionSort(int size, int arr[]) {

	for (int i=0; i<size-1; i++) {
		for (int j=i+1; j<size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}

	cout << "DONE!" << endl;

	return 0;
}

int binarySearch(int size, int arr[], int key) {
	
	int start = 0;
	int end = size;

	while (start <= end) {
		int mid = start + end / 2;
		if (arr[mid] == key) {
			cout << "Found key " << key << " at index" << mid << endl; 
			break;
		}
		else if (arr[mid] > key) {
			end = mid - 1;
		}
		else {
			start = mid + 1; 
		}
	}
	return 0;
}

int bubbleSort(int size, int arr[]) {
	int counter = 1;

	while (counter < size) {
		for (int i=0; i<size-1; i++) {
			if (arr[i] > arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter ++;
	}

	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	return -1;
	
}

int main () {

	int size;
	cout << "Size: ";
	cin >> size;
	int arr[size];

	cout << "Elements: ";
	for (int i=0; i<size; i++) {
		cin >> arr[i];
	}

	// int key;
	// cout << "key to find: ";
	// cin >> key;

	// cout << binarySearch(size, arr, key);
	//cout << selectionSort(size, arr);

	cout << bubbleSort(size, arr);

	return 0;
}