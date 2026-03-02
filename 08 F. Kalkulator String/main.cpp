#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    long sum = 0;
    if (op == '+') {
        for (int i=0; i< data.size(); i++) {
            sum += stol(data[i]);
        }
    } else if (op == '*') {
        sum = stol(data[0]);
        for (int i=1; i<data.size(); i++) {
            sum *= stol(data[i]);
        }
    } else {
        return "KESALAHAN";
    }
    return to_string(sum);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
