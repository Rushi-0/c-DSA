#include <iostream>
using namespace std;

void test(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int  a=1, b=2;
    int *aptr = &a;
    int *bptr = &b;
    test(aptr, bptr);
    
    cout << a << " "<< b << endl;

    return 0;
}