#include <iostream>
using namespace std;

int main(){

    cout << "1" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    }

    cout << "\n2" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }

    cout << "\n3" << endl;
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) {
            continue;
            }
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            }
        }
    }

    cout << "\n4" << endl;
    int n = 47;
    while (true) {
        if (n == 0) {
            break;
        }
        cout << "*";
        n = n / 10;
    }
}