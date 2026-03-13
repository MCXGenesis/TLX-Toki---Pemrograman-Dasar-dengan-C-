// Example program
#include <iostream>
#include <cmath>
using namespace std;

int x = 0;

int fun () {
    if (x >= 10) x=0;
    return x++;
    }

int main () {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++){
        for (int j=0; j<i; j++) {
            cout << fun();
        }
        cout << "\n";
    }
}