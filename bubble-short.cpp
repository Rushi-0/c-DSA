#include <iostream> 
using namespace std;

int main() {

    int size;
    cout << "size: ";
    cin >> size;

    int arr[size];
    cout << "elements: ";

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter<size-1) {
        for (int i=0; i<size-1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }   
    
    cout << "bubble Sorted array: ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}