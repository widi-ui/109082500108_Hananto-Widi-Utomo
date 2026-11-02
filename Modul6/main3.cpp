#include "Buku.h"

int main() {
    List L;
    createList(L);

    infotype x;
    x.kodeBuku = "B001"; x.judul = "Algoritma"; x.thnTerbit = 2020;
    insertLast(L, alokasi(x));
    x.kodeBuku = "B003"; x.judul = "Struktur_Data"; x.thnTerbit = 2018;
    insertLast(L, alokasi(x));
    x.kodeBuku = "B004"; x.judul = "Jaringan_Komputer"; x.thnTerbit = 2022;
    insertLast(L, alokasi(x));

    infotype hapus;
    cout << "Masukkan Kode Buku yang akan dihapus : ";
    cin >> hapus.kodeBuku;

    address target = findElm(L, hapus);
    address P = Nil;

    if (target == Nil) {
        cout << "Data dengan kode buku " << hapus.kodeBuku << " tidak ditemukan." << endl;
    } else {
        if (target == L.First) {
            deleteFirst(L, P);
        } else if (target == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(target->prev, P);
        }
        dealokasi(P);
        cout << "Data dengan kode buku " << hapus.kodeBuku << " berhasil dihapus." << endl;
    }

    cout << endl << "DATA LIST 1" << endl;
    printInfo(L);
    return 0;
}