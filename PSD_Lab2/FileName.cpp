#include <iostream>
using namespace std;

bool fn(bool p, bool q, bool r) {
    return (!p) || (q && r);
}

void PrintTruthTable() {
    cout << "Truth table for fn = p => (q ^ r)\n";
    cout << "-------------------------------------------\n";
    cout << "| p | q | r | (q ^ r) | fn = p => (q ^ r) |\n";
    cout << "-------------------------------------------\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int qr = q && r;
                int f = fn(p, q, r);
                cout << "| " << p
                    << " | " << q
                    << " | " << r
                    << " |    " << qr
                    << "    |          " << f << "        |\n";
            }
        }
    }

    cout << "-------------------------------------------\n";
}

int main() {
    PrintTruthTable();
    return 0;
}
