#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    vector<int> data;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        data.push_back(x);
    }
    int sum = 0;
    for (int i = 0;i < N; i++) {
        sum += data[i];
    }
    for (int i = 0;i < N; i++) {
        cout << sum-data[i] << endl;
    }
}