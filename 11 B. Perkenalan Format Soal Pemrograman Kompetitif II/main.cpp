#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N;
    vector<long long> data;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;
        data.push_back(x);
    }
    long long sum = 0;
    for (int i = 0;i < N; i++) {
        sum += data[i];
    }
    for (int i = 0;i < N; i++) {
        cout << sum-data[i] << endl;
    }
}