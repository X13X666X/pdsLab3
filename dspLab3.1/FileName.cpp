#include <iostream>
using namespace std;

int Calc(int n, int r);

int Calc(int n, int r) {
    int P1 = 1, P2 = 1;

    for (int i = 1; i <= n; i++) {
        P1 *= i;
    }
    for (int i = 1; i <= n - r; i++) {
        P2 *= i;
    }

    return P1 / P2;
}

int main() {
    int n = 10;
    int r = 9;

    cout << "n:" << n << endl;
    cout << "r:" << r << endl;

    int A = Calc(n, r);

    cout << "A(" << n << "," << r << ") = " << A << endl;

    return 0;
}