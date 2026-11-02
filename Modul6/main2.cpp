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

    infotype cari;
    cout << "Masukkan Kode Buku yang dicari : ";
    cin >> cari.kodeBuku;
    cout << endl;

    address P = findElm(L, cari);
    if (P != Nil) {
        cout << "Kode Buku    : " << P->info.kodeBuku << endl;
        cout << "Judul        : " << P->info.judul << endl;
        cout << "Tahun Terbit : " << P->info.thnTerbit << endl;
    } else {
        cout << "Kode buku " << cari.kodeBuku << " tidak ditemukan" << endl;
    }
    return 0;
}