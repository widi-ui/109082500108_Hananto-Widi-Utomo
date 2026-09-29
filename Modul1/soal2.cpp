#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input angka : ";
    cin >> n;

    string angka[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    if (n < 0 || n > 100) {
        cout << "Angka tidak valid";
    }
    else if (n <= 9) {
        cout << angka[n];
    }
    else if (n == 10) {
        cout << "sepuluh";
    }
    else if (n == 11) {
        cout << "sebelas";
    }
    else if (n <= 19) {
        cout << angka[n - 10] << " belas";
    }
    else if (n < 100) {
        cout << angka[n / 10] << " puluh";

        if (n % 10 > 0) {
            cout << " " << angka[n % 10];
        }
    }
    else {
        cout << "seratus";
    }

    return 0;
}
