#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int s=0;
    int e=size;

    while (s <= e) {
        int mid = (s+e)/ 2;
        if (arr[mid] == key) {
            cout << "Found " << arr[mid] << " at index " << mid << endl; 
            break;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return 0;
}

int main() {

    int size;
    cout << "size: ";
    cin >> size;
    int arr[size];

    cout << "elements: ";
    for (int i=1; i<=size; i++) {
        cin >> arr[i];
    }

    int key;   
    
    while (true) {

        cout << "search: ";
        cin >> key;
        cout << binarySearch(arr, size, key);
    }

    return 0;

}



