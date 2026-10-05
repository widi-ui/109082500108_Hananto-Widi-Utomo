# <h1 align="center">Laporan Praktikum Modul 2 - Pengenalan Bahas C++ (Bagian Kedua)</h1>
<p align="center">Hananto Widi Utomo -109082500108 </p>

## Dasar Teori
isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

### B. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

## Guided 

### 1. array1

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[5];

    nilai[0] = 80;
    nilai[1] = 85;
    nilai[2] = 90;
    nilai[3] = 75;
    nilai[4] = 95;

    for (int i = 0; i < 5; i++) {
        cout << "index ke-" << i << " = " << nilai[i] << endl;
    }

    return 0;
}
```
Program ini memperkenalkan array satu dimensi. Array nilai punya 5 elemen dengan indeks 0 sampai 4.

cpp
int nilai[5];

Baris ini menyediakan tempat untuk 5 data bertipe int. Program lalu mengisi tiap elemen:

cpp
nilai[0] = 80;
nilai[1] = 85;
nilai[2] = 90;
nilai[3] = 75;
nilai[4] = 95;

Perulangan for menampilkan seluruh isi array:

cpp
for (int i = 0; i < 5; i++) {
    cout << "index ke-" << i << " = " << nilai[i] << endl;
}

Variabel i berperan sebagai indeks dan bergerak dari 0 sampai 4.

Kesimpulan: program ini menunjukkan cara mendeklarasikan, mengisi, dan mengakses array satu dimensi dengan indeks dan perulangan for.

### 2. array2

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {80, 85, 90},
        {75, 80, 85},
        {90, 95, 100}
    };

    /*
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
    */

    cout << nilai[0][0] << endl; // 80
    cout << nilai[1][1] << endl; // 80
    cout << nilai[2][2] << " ";  // 100

    return 0;
}
```
Program ini memakai array dua dimensi, yaitu array yang tersusun dari baris dan kolom.

cpp
int nilai[3][3] = {
    {80, 85, 90},
    {75, 80, 85},
    {90, 95, 100}
};

Array ini punya 3 baris dan 3 kolom. Kamu mengakses elemennya dengan dua indeks, nilai[baris][kolom].

cout << nilai[0][0] << endl; mengambil baris 0 kolom 0 dan menampilkan 80.
cout << nilai[1][1] << endl; menampilkan 80.
cout << nilai[2][2] << endl; menampilkan 100.

Kode ini juga memuat perulangan bersarang yang sudah dijadikan komentar. Kalau komentarnya dibuka, perulangan itu menampilkan seluruh isi array.

Kesimpulan: program ini menunjukkan array dua dimensi dan cara mengambil elemen tertentu lewat indeks baris dan kolom.

### 3. array3

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    /*
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << data[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    */

    cout << data[0][1][1] << " "; // 5

    return 0;
}
```
Program ini memakai array tiga dimensi:

cpp
int data[2][3][3]

Array ini terdiri dari 2 bagian. Setiap bagian punya 3 baris dan 3 kolom. Isinya:

1  2  3
4  5  6
7  8  9

dan

10  11  12
13  14  15
16  17  18

Kamu mengakses elemennya dengan tiga indeks, data[i][j][k]. Perhatikan baris ini:

cpp
cout << data[0][1][1] << " ";

Indeks pertama 0 memilih bagian pertama, indeks kedua 1 memilih baris kedua, dan indeks ketiga 1 memilih kolom kedua. Hasilnya 5.

Ada juga tiga perulangan for bersarang yang dijadikan komentar. Perulangan itu menampilkan seluruh isi array bila komentarnya dibuka.

Kesimpulan: program ini menunjukkan struktur array tiga dimensi dan cara mengakses elemennya dengan tiga indeks.

### 4. array4

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][2][2][2] = {
        {
            {
                {1, 2},
                {3, 4}
            },
            {
                {5, 6},
                {7, 8}
            }
        },
        {
            {
                {9, 10},
                {11, 12}
            },
            {
                {13, 14},
                {15, 16}
            }
        }
    };

    cout << data[0][0][0][0] << endl; // 1
    cout << data[1][1][1][1] << endl; // 16

    return 0;
}
```
Program ini memakai array empat dimensi:

cpp
int data[2][2][2][2]

Kamu mengakses elemennya dengan empat indeks, data[i][j][k][l]. Isinya angka 1 sampai 16.

cout << data[0][0][0][0] << endl; mengambil elemen pertama dan menampilkan 1.
cout << data[1][1][1][1] << endl; mengambil elemen terakhir dan menampilkan 16.

Kesimpulan: program ini menunjukkan cara mendeklarasikan array empat dimensi dan mengakses elemennya dengan empat indeks.

### 5. pointer1

```C++
#include <iostream>
using namespace std;

int main() {
    char a;
    int j;
    char arr[6];

    arr[3] = 'b';
    a = 'u';
    j = 10;

    cout << a << endl; // u
    cout << &a << endl; // alamat memory atau address

    cout << j << endl; // 10
    cout << &j << endl; // alamat memory atau address

    cout << arr[3] << endl; // value
    cout << &(arr[4]) << endl; // alamat memory atau address

    return 0;
}
```
Program ini memperkenalkan alamat memori dan operator alamat &. Variabelnya:

cpp
char a;
int j;
char arr[6];

Nilai yang diberikan:

cpp
arr[3] = 'b';
a = 'u';
j = 10;

cout << a << endl; menampilkan u, yaitu isi variabel a.

cout << &a << endl; bermaksud menampilkan alamat a. Namun cout memperlakukan &a sebagai pointer char, yaitu string C, jadi yang tercetak adalah karakter mulai dari alamat itu sampai ketemu karakter null. Keluarannya bisa berupa u diikuti karakter acak. Untuk melihat alamat yang sebenarnya, tulis cout << (void*)&a << endl;.

Variabel j bertipe int, jadi cout << j << endl; menampilkan 10 dan cout << &j << endl; menampilkan alamat j dalam format heksadesimal.

cout << arr[3] << endl; menampilkan b. cout << &(arr[4]) << endl; punya masalah yang sama dengan &a. Gunakan (void*)&(arr[4]) untuk menampilkan alamat elemen indeks 4.

Kesimpulan: program ini menunjukkan perbedaan antara nilai variabel dan alamat memorinya, serta perilaku khusus cout pada alamat bertipe char.

### 6. pointer2

```C++
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi x= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}
```
Program ini membahas dasar pointer.

cpp
int x, y;
int *px;

px adalah pointer ke int, jadi ia menyimpan alamat variabel bertipe int. Selanjutnya:

cpp
x = 87;
px = &x;

Sekarang px menyimpan alamat x. Lalu:

cpp
y = *px;

Operator * mengambil nilai yang ada di alamat yang ditunjuk pointer. Karena px menunjuk x yang bernilai 87, maka y bernilai 87.

Program menampilkan tiga hal:

cout << "Alamat x= " << &x << endl; menampilkan alamat x.
cout << "Isi px= " << px << endl; menampilkan alamat yang tersimpan di px. Nilainya sama dengan alamat x.
cout << "Nilai yang ditunjuk px= " << *px << endl; menampilkan 87.

Kesimpulan: program ini menunjukkan hubungan antara variabel, alamat memori, pointer, dan nilai yang ditunjuk pointer.

### 7. pointer3

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];

    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    // inisialisasi array satu dimensi
    for (i = 0; i < MAX; i++) {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }

    cout << "\ndata nilai siswa :\n";

    // menampilkan array satu dimensi
    for (i = 0; i < MAX; i++) {
        cout << "nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    cout << "\n nilai tahunan :\n";

    // menampilkan array dua dimensi
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j];
        }

        cout << "\n";
    }

    return 0;
}
```
Program ini memakai array satu dimensi dan array dua dimensi sekaligus. Baris

cpp
#define MAX 5

menetapkan ukuran array sebesar 5. Array satu dimensi float nilai[MAX]; menyimpan nilai yang diketik pengguna:

cpp
for (i = 0; i < MAX; i++) {
    cout << "masukkan nilai ke-" << i + 1 << endl;
    cin >> nilai[i];
}

Program lalu menampilkan kembali nilai itu dengan perulangan for.

Array dua dimensi berukuran 5 × 5:

cpp
static int nilai_tahun[MAX][MAX] = {
    {0, 2, 2, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 3, 3, 3, 0},
    {4, 4, 0, 0, 4},
    {5, 0, 0, 0, 5}
};

Dua perulangan menampilkan isinya:

cpp
for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
        cout << nilai_tahun[i][j];
    }
    cout << "\n";
}

Perulangan luar berjalan untuk baris dan perulangan dalam berjalan untuk kolom.

Kesimpulan: program ini menunjukkan cara memasukkan dan menampilkan data array satu dan dua dimensi dengan perulangan.

### 8. pointer4

```C++
#include <iostream>
using namespace std;

int main() {
    char nama[] = "strukdat";

    cout << nama << endl;
    cout << nama[3] << endl;

    return 0;
}
```
Program ini memakai array karakter sebagai string sederhana.

cpp
char nama[] = "strukdat";

Variabel nama adalah array char berisi s t r u k d a t, ditambah karakter null di ujungnya sebagai penanda akhir string.

cout << nama << endl; menampilkan strukdat.

cout << nama[3] << endl; mengambil karakter pada indeks 3. Indeks dimulai dari 0, jadi:

nama[0] = s
nama[1] = t
nama[2] = r
nama[3] = u

Outputnya u.

Kesimpulan: program ini menunjukkan cara menyimpan teks dalam array char dan mengambil karakter tertentu lewat indeks.

## Unguided 

### 1. (Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3)

```C++
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];

    cout << "Masukkan matriks A :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Masukkan matriks B :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            kali[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nHasil Penjumlahan :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul2/Output/Output1.png?raw=true)


penjelasan unguided 1 
Pada soal pertama, dibuat program untuk melakukan tiga operasi pada dua buah matriks berukuran 3×3, yaitu penjumlahan, pengurangan, dan perkalian matriks.

Untuk penjumlahan, setiap elemen pada matriks pertama dijumlahkan dengan elemen yang berada pada posisi yang sama di matriks kedua. Begitu juga dengan pengurangan, yaitu setiap elemen matriks pertama dikurangi dengan elemen pada posisi yang sama di matriks kedua.

Sedangkan untuk perkalian matriks, perhitungannya berbeda karena setiap elemen hasil diperoleh dari perkalian elemen pada baris matriks pertama dengan elemen pada kolom matriks kedua, kemudian hasilnya dijumlahkan. Oleh karena itu, pada program digunakan tiga perulangan for, yaitu untuk menentukan baris, kolom, dan proses perkaliannya.

Intinya: soal ini digunakan untuk memahami penggunaan array dua dimensi dan perulangan bersarang dalam operasi matriks.

### 2. (Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel)

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Nilai awal :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "\nSetelah menggunakan pointer :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    a = 10;
    b = 20;
    c = 30;

    tukarReference(a, b, c);

    cout << "\nSetelah menggunakan reference :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul2/Output/output2.png?raw=true)

penjelasan unguided 2
Pada soal kedua, program diminta untuk menukar nilai dari tiga variabel menggunakan pointer dan reference.

Misalnya terdapat tiga variabel:

a = 10
b = 20
c = 30

Setelah dilakukan pertukaran, nilainya menjadi:

a = 20
b = 30
c = 10

Pada penggunaan pointer, alamat dari variabel dikirim ke fungsi menggunakan operator &, kemudian nilai variabel diakses menggunakan operator *.

Sedangkan pada reference, parameter fungsi langsung menjadi referensi dari variabel aslinya. Jadi, perubahan nilai di dalam fungsi akan langsung memengaruhi variabel yang ada di main().

Untuk menyimpan nilai awal a sebelum ditukar digunakan variabel temp. Dengan begitu, nilai awal tersebut tidak hilang saat proses pertukaran berlangsung.

Intinya: soal ini digunakan untuk memahami perbedaan cara kerja pointer dan reference ketika mengubah nilai variabel melalui sebuah fungsi.

### 3. (Diketahui sebuah array 1 dimensi sebagai berikut :
arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55}
Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini :
--- Menu Program Array ---
1. Tampilkan isi array
2. cari nilai maksimum
3. cari nilai minimum
4. Hitung nilai rata - rata)

```C++
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
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul2/Output/output3.png?raw=true)


penjelasan unguided 3
Pada soal ketiga diberikan array:

{11, 8, 5, 7, 12, 26, 3, 54, 33, 55}

Program diminta untuk mencari nilai minimum, maksimum, dan rata-rata dari array tersebut. Selain itu, soal secara khusus meminta penggunaan cariMinimum(), cariMaksimum(), hitungRataRata(), dan menu menggunakan switch-case.

Untuk mencari nilai minimum, setiap elemen array dibandingkan dengan nilai minimum sementara. Jika ditemukan nilai yang lebih kecil, maka nilai tersebut menjadi minimum baru.

Untuk mencari nilai maksimum, caranya sama, tetapi yang dicari adalah nilai yang lebih besar.

Sedangkan untuk menghitung rata-rata, seluruh nilai dalam array dijumlahkan terlebih dahulu, kemudian hasilnya dibagi dengan jumlah elemen array.

Dari data tersebut diperoleh:

Nilai minimum = 3
Nilai maksimum = 55
Nilai rata-rata = 21,4

Menu switch-case digunakan agar pengguna dapat memilih operasi yang ingin dijalankan, yaitu menampilkan array, mencari maksimum, mencari minimum, atau menghitung rata-rata.

Intinya: soal ini digunakan untuk memahami penggunaan array satu dimensi, function, procedure, perulangan, dan switch-case.

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
