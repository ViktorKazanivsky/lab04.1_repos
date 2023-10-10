#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, k, N;
    double S;

    cout << "k = "; cin >> k;

    S = k;
    i = N;
    while (i <= 16) {
        S *= i * N * N / (i * i + N * N);
        i++;
    }
    cout << "While " << S << endl;

    S = k;
    i = N;
    do {
        S *= i * N * N / (i * i + N * N);
        i++;
    } while (i <= 16);
    cout << "Do+While " << S << endl;

    S = k;
    for (i = N; i <= 16; i++) {
        S *= i * N * N / (i * i + N * N);
    }
    cout << " (for++) " << S << endl;

    S = k;
    for (i = N; i >= 16; i--) {
        S *= i * N * N / (i * i + N * N);
    }
    cout << " for-- " << S << endl;

    return 0;
}