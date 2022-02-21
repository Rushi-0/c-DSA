#include <iostream>
using namespace std;

int main() {

	int a=10; //stored in stack
	int *ptr = new int(); // allocate mem in heap
	*ptr =  a;
	delete(ptr); // deallocate mem
	ptr = new int[5]; // allocate mem for arr of size 5 in heap
	int arr[4] = {1,2,3,4};
	int n = 4;
	
	for (int i=0; i<n; i++) {
		*ptr = arr[i];
		cout << ptr << "-->" << *ptr << endl;
	}
	
	delete[]ptr; // Deallocate mem 
	ptr = NULL; // now ptr is not pointing 

	cout << " -- " << *ptr << endl;


	return 0;
}