// Example program
#include <iostream>
#include <cmath>
using namespace std;

int A, B, K, x;
    
int fun (int k, int x) {
    if (k == 0) return x;
    return abs(A* fun(k-1, x)+B);
}

int main()
{
    cin >> A >> B >> K >> x;
    cout << fun(K,x);
}