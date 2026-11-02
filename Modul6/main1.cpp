#include "Buku.h"

int main() {
    List L;
    createList(L);

    infotype x;
    int tersimpan = 0;

    while (tersimpan < 3) {
        cout << "masukkan kode buku: ";
        cin >> x.kodeBuku;
        cout << "masukkan judul buku: ";
        cin >> x.judul;
        cout << "masukkan tahun terbit: ";
        cin >> x.thnTerbit;

        if (findElm(L, x) != Nil) {
            cout << "kode buku sudah terdaftar" << endl;
        } else {
            insertLast(L, alokasi(x));
            tersimpan++;
            cout << endl;
        }
    }

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);
    return 0;
}