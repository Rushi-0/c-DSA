#include <iostream>
using namespace std;

int linearSearch(int arr1[], int n, int key) {
    
    for (int i=1; i<=n; i++) {
        if (arr1[i] == key) {
            cout << "Found: " << arr1[i] << "at " << i << endl;
        }
    }
    return 0;
}

int main() {
    int key;
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr1[size];
    cout << "Enter elements: ";

    for (int i=1; i<=size; i++) {
        cin >> arr1[i];
    }
    cout << "Array: ";
    for (int i=1; i<=size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Enter ele to search: ";
    cin >> key;

    linearSearch(arr1, size, key);
    return 0;
}