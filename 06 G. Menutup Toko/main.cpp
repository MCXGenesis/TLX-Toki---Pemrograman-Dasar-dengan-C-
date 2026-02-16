#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};
    int sum[3] = {0,0,0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[j] += harga_jual[j] * luas[i][j];
        }
    }

    for (int i=0; i<3;i++){
        cout << sum[i] << endl;
    }
}
