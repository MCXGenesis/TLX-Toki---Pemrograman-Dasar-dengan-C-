#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N, x = -100000, y = 100000, a;
    cin >> N;
    vector<int> num(N);
    for (int i = 0; i<N; i++) {
        cin >> a;
        num[i] = a;
    }
    
    for (int i = 0; i<N; i++) {
        if (num[i] > x) {
            x = num[i];
        }
        if (num[i] < y) {
            y = num[i];
        }
    }
    
    cout << x << " " << y << endl;
    
}
