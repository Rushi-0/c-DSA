#include <iostream>
using namespace std;

int main() {

    cout << "---SELECTION SORT---" << endl;

    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size];
    cout << "elements: ";
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}