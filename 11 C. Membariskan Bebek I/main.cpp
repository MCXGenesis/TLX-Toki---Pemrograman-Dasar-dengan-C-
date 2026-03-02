#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    int r =1;
    int c =N;
    int s = 0;

    vector<int> f;

    for (int i = 1; i <= N; i++) {
        if (N%i == 0) {
            f.push_back(i);
        }
    }

    for (int x:f) {
        for (int y:f) {
            if (x*y == N) {
                if ((y-x) >= s) {
                    r =x;
                    c =y;
                }
            }
        }
    }

    cout << r << " " << c << endl;

}