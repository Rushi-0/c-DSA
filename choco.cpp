#include <iostream>
using namespace std;

int main() {

    int money = 15;
    int qty;
    cout << "1 chocolate = 1 rupees" << endl;
    cout << "1 chocolate = 3 wrappers" << endl;

    cout << "Buy chocolate: ";
    cin >> qty;

    int bal_money = qty - money;

    cout << "Chocolates: " << qty << endl;
    cout << "Balance Money: " << bal_money << endl;
    cout << "Wrappers: " << qty << endl;

    int choice;
    cout << "buy chocolate with wrappers(1/0): ";
    cin >> choice;

    if (choice == 1) {
        int wrap_choco = qty / 3;
        int rem_wrap = qty % 3;
        
        for (int i=0; i<=rem_wrap; i++) {
        
            cout << "bought " << wrap_choco << " chocolates" << endl; 
            cout << "balance wrappers: " << rem_wrap << endl;
            }
        }
    else {
        cout << "thx for shopping " << endl;
    }
    


}