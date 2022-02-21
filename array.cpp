#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    cout << "Enter eles: ";

    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }    
    
    for (int i=1; i<=n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
   
}