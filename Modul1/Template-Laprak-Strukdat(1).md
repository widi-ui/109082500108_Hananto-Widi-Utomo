# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Hananto Widi Utomo -109082500108 </p>

## Dasar Teori
Praktikum ini memperkenalkan Code Blocks sebagai kakas untuk menulis program dan dasar-dasar bahasa C++. Materinya mencakup cara memakai Code Blocks, struktur program, tipe data, input/output, operator, percabangan, perulangan, struktur, dan fungsi[1].

### A. Code Blocks IDE<br/>
Code Blocks merupakan IDE (Integrated Development Environment) yang bersifat gratis, open-source, dan cross-platform. IDE ini berorientasi pada bahasa C, C++, dan Fortran[1]. Pada praktikum ini, Code Blocks digunakan sebagai tempat menulis dan menjalankan program C++.

#### 1.1. Project dan File Program
Program dikerjakan di dalam sebuah project yang dibuat lewat menu File > New > Projects. Jenis project yang dipilih adalah Console Application, kemudian diisi nama project dan folder penyimpanannya[1]. Kode program ditulis di editor pada file `main.cpp`. File tambahan, seperti header, dibuat lewat File > New > File, dan opsi build target perlu dicentang saat membuatnya. Jika terlewat, pengaturannya dapat diubah lewat Properties > Build targets pada project. File yang belum disimpan ditandai tanda * di depan namanya. Penyimpanan dilakukan dengan Ctrl+S untuk satu file atau Ctrl+Shift+S untuk seluruh file[1].

#### 2. 2. Build, Run, dan Clean
Program yang sudah ditulis harus dibangun terlebih dahulu sebelum dapat dijalankan. Code Blocks menyediakan beberapa aksi untuk keperluan ini[1].
- Build (Ctrl+F9) membangun kode program menjadi sebuah program.
- Run (Ctrl+F10) menjalankan program yang sudah di-build. Program tidak akan berjalan sebelum di-build.
- Build and Run (F9) menjalankan Build dan Run secara berurutan.
- Rebuild (Ctrl+F11) membangun kembali program.
- Abort menghentikan program yang sedang berjalan.
Jika program tidak dapat dijalankan, project dapat di-Clean lewat klik kanan pada project. Setelah itu program umumnya dapat dijalankan kembali[1].

#### 3. Pesan Error
Kesalahan penulisan kode akan menampilkan error message pada panel Build messages. Pesan tersebut memuat nomor baris dan jenis kesalahannya. Sebagai contoh, pada modul terdapat pernyataan `cout << "Hello world!" << endl` di baris 7 yang tidak diakhiri titik koma. Code Blocks melaporkan `expected ';' before 'return'` pada baris 8[1]. Dari contoh ini terlihat bahwa baris yang ditunjuk pesan error bisa berbeda dengan baris tempat kesalahan sebenarnya, sehingga baris sebelumnya juga perlu diperiksa.

### B. Bahasa Pemrograman C++<br/>
Bahasa C++ diciptakan oleh Bjarne Stroustrup di AT&T Bell Laboratories pada awal tahun 1980-an dengan dasar bahasa C. Pada mulanya bahasa ini disebut "C with class", yaitu bahasa C yang ditambah fasilitas kelas. Setelah fasilitas pembebanlebihan operator dan fungsi ditambahkan, bahasa ini disebut C++. Simbol ++ diambil dari operator penaikan pada bahasa C, dan menunjukkan bahwa C++ merupakan versi C yang lebih canggih[1].

#### 1. Struktur Program dan Identifier
Program C++ tersusun atas beberapa bagian, yaitu deklarasi library (`#include <iostream>`), pendefinisian konstanta, pendefinisian tipe data bentukan (struct), deklarasi variabel, deklarasi fungsi dan prosedur, serta program utama `main()`[1]. Library `iostream` diperlukan karena berisi prototype fungsi `cin` dan `cout`. Setiap pernyataan diakhiri titik koma (;) dan semua variabel harus dideklarasikan sebelum dipakai. Komentar dapat ditulis di bagian mana pun dengan diapit tanda `/*` dan `*/`[1].

Nama yang dipakai untuk variabel, konstanta, fungsi, atau objek lain disebut identifier. Aturan penamaannya sebagai berikut[1].
- Diawali dengan huruf atau garis bawah (_).
- Karakter berikutnya dapat berupa huruf, angka, garis bawah, atau tanda dollar ($).
- Panjang maksimal 32 karakter. Jika lebih, hanya 32 karakter awal yang dianggap.
- Tidak boleh mengandung spasi dan operator aritmatika (+ - / * %).

C++ bersifat case sensitive, sehingga `panjang` berbeda dengan `Panjang`[1].

#### 2. Tipe Data, Variabel, Konstanta, serta Input dan Output
Tipe data menentukan jenis nilai yang disimpan beserta ukuran memorinya. Menurut modul, tipe data dasar yang digunakan adalah `char` (1 byte), `int` (2 byte), `long` (4 byte), `float` (4 byte), dan `double` (8 byte)[1]. `int` dan `long` menyimpan bilangan bulat, sedangkan `float` dan `double` menyimpan bilangan pecahan dengan presisi tunggal dan ganda. Ukuran tersebut dapat berbeda pada komputer lain, sehingga dapat diperiksa dengan operator `sizeof`[1].

Variabel menyimpan nilai yang dapat berubah selama program berjalan. Bentuk deklarasinya adalah `tipe_data nama_variabel;`, misalnya `int x, y;`, dan variabel dapat langsung diberi nilai awal seperti `int x=20, y=6;`. Konstanta adalah nilai yang selalu tetap dan dideklarasikan dengan menambahkan kata `const`, misalnya `const float phi = 3.14;`[1].

Fungsi `cout` menampilkan data ke layar dengan operator `<<`, sedangkan `cin` meminta masukan dari keyboard dengan operator `>>`, misalnya `cin >> inp;`. Perpindahan ke baris baru dilakukan dengan `endl` atau escape sequence `\n`, dan `\t` menghasilkan tabulasi. Penentu format seperti `%d` dan `%f` dipakai pada bahasa C dan tidak harus dipakai pada C++[1].

#### 3. Operator, Percabangan, dan Perulangan
Operator adalah simbol yang digunakan untuk melakukan suatu operasi atau manipulasi[1]. Operator aritmatika terdiri dari penjumlahan (+), pengurangan (-), perkalian (*), pembagian (/), dan modulus (%) yang menghasilkan sisa pembagian. Urutan pengerjaan dapat diubah dengan tanda kurung. Pada modul, `Z = (X + Y)/(Y + W)` dengan X=7, Y=3, dan W=1 menghasilkan 2, padahal hasil pembagian sebenarnya 2,5, karena operand-nya bertipe `int`. Hasil 2,5 diperoleh dengan operator tipe, yaitu `Z = (float)(X + Y)/(Y + W)`[1]. Operator relasi (`==`, `!=`, `<`, `<=`, `>`, `>=`) membandingkan dua nilai, sedangkan operator logika `&&`, `||`, dan `!` menggabungkan atau membalik kondisi[1].

Percabangan digunakan untuk mengambil keputusan berdasarkan kondisi yang bernilai benar atau salah. Pernyataan `if` menjalankan perintah jika kondisinya benar, dan `if-else` menyediakan perintah lain untuk kondisi yang salah. Bentuk `if-else` dapat disederhanakan dengan operator kondisional `expr1 ? expr2 : expr3`. Untuk banyak alternatif digunakan `switch`, yang mencocokkan nilai variabel dengan tiap `case` dan menjalankan `default` jika tidak ada yang cocok[1].

Perulangan digunakan untuk menjalankan perintah yang sama secara berulang dan harus memiliki kondisi berhenti. Bentuk `for (initialization; condition; increment/decrement)` menyatakan keadaan awal variabel kontrol, kondisi berhenti, dan perubahan nilainya. Bentuk `while (condition)` memeriksa kondisi di awal, sedangkan `do { ... } while (condition);` memeriksa kondisi di akhir sehingga perulangan terjadi minimal satu kali[1]. 

## Unguided 

### 1. (isi dengan soal unguided 1)
Buatlah program yang menerima input-an dua buah bilangan bertipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.
```C++
source code unguided 1
#include <iostream>
using namespace std;

int main(){
    float a, b;

    cin >> a >> b;

    cout << "Penjumlahan = " << a + b << endl;
    cout << "Pengurangan = " << a - b << endl;
    cout << "Perkalian = " << a * b << endl;
    cout << "Pembagian = " << a / b << endl;

    return 0;
}```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. (isi dengan soal unguided 2)

```C++
source code unguided 2
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
source code unguided 3
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
