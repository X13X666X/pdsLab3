#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 50;

void computeStirling(long long F[MAX][MAX], int n) {
    for (int j = 0; j <= n; j++)
        for (int k = 0; k <= n; k++)
            F[j][k] = 0;
    for (int j = 1; j <= n; j++) {
        F[j][1] = 1;
        F[j][j] = 1;
    }
    for (int j = 2; j <= n; j++)
        for (int k = 2; k < j; k++)
            F[j][k] = F[j - 1][k - 1] + k * F[j - 1][k];
}

void computeBell(long long B[MAX], long long F[MAX][MAX], int n) {
    for (int j = 0; j <= n; j++)
        B[j] = 0;
    for (int j = 1; j <= n; j++)
        for (int k = 1; k <= j; k++)
            B[j] += F[j][k];
}

void printStirlingTable(long long F[MAX][MAX], int n) {
    cout << "Table of Stirling numbers of the second kind (S(n,k)):\n\n";

    cout << " n/k |";
    for (int k = 1; k <= n; k++)
        cout << setw(6) << k << " ";
    cout << "\n-----+";
    for (int k = 1; k <= n; k++)
        cout << "-------";
    cout << endl;

    for (int j = 1; j <= n; j++) {
        cout << setw(4) << j << " |";
        for (int k = 1; k <= j; k++)
            cout << setw(6) << F[j][k] << " ";
        cout << endl;
    }
    cout << endl;
}

void printBellTable(long long B[MAX], int n) {
    cout << "Table of Bell numbers:\n\n";
    cout << "  n  |      B(n)\n";
    cout << "-----+--------------\n";
    for (int j = 1; j <= n; j++)
        cout << setw(4) << j << " |" << setw(12) << B[j] << endl;
    cout << endl;
}

int main() {
    int i = 6;
    int n = i + 5;

    long long F[MAX][MAX];
    long long B[MAX];

    computeStirling(F, n);
    computeBell(B, F, n);

    printStirlingTable(F, n);
    printBellTable(B, n);

    return 0;
}

