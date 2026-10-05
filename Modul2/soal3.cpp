#include <iostream>
using namespace std;

int cariMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int cariMaksimum(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

void hitungRataRata(int arr[], int n) {
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        jumlah += arr[i];
    }

    float rataRata = (float) jumlah / n;

    cout << "Nilai rata-rata = " << rataRata << endl;
}

int main() {
    int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int pilihan;

    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. Cari nilai maksimum" << endl;
    cout << "3. Cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata - rata" << endl;
    cout << "Pilihan : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Isi array : ";

            for (int i = 0; i < 10; i++) {
                cout << arrA[i] << " ";
            }

            cout << endl;
            break;

        case 2:
            cout << "Nilai maksimum = "
                 << cariMaksimum(arrA, 10) << endl;
            break;

        case 3:
            cout << "Nilai minimum = "
                 << cariMinimum(arrA, 10) << endl;
            break;

        case 4:
            hitungRataRata(arrA, 10);
            break;

        default:
            cout << "Pilihan tidak tersedia." << endl;
    }

    return 0;
}
