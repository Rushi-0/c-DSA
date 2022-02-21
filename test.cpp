#include <iostream>
using namespace std;

class test {
    public:
        int a =20;
        int b = 30;
        test(int num1) {
            a = num1;
            b = a;

            cout << num1 << endl;
            cout << a << endl;
        }

};


int main() {
    //int cc = 2500;
    test obj(1000);

    return 0;
}