#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long r = 1;
    long long c = N;

    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            long long j = N / i;
            if (j - i < c - r) {
                r = i;
                c = j;
            }
        }
    }

    cout << r << " " << c << endl;

    return 0;
}