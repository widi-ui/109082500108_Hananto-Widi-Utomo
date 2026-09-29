# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Hananto Widi Utomo -109082500108 </p>

## Dasar Teori
Praktikum ini memakai Code Blocks untuk menulis program C++ dan mempelajari dasar bahasanya: struktur program, tipe data, operator, percabangan, dan perulangan[4].

### A. Code Blocks IDE<br/>
Program C++ membutuhkan editor teks untuk menulis kode dan compiler, misalnya GCC, untuk menerjemahkannya ke bahasa mesin[1]. IDE (Integrated Development Environment) menggabungkan keduanya dalam satu aplikasi untuk menyunting dan mengompilasi kode. Code Blocks, Eclipse, dan Visual Studio termasuk IDE semacam ini[1]. Code Blocks gratis, bisa menyunting dan men-debug kode C++, dan cocok untuk pemula[1]. Saat instalasi, pilih installer yang menyertakan compiler (mingw-setup) supaya program bisa dikompilasi[1].


#### 1.1. Project dan File Program
Kita menulis kode sumber di editor dan menyimpannya dalam file berekstensi `.cpp`[1]. Praktikum ini memakai project Console Application dengan file utama `main.cpp`. Simbol * di depan nama file menandakan file itu belum disimpan.


#### 2. 2.Build, Run, dan Clean
Compiler mengubah kode sumber menjadi bahasa mesin sebelum CPU menjalankannya[3]. Proses itu disebut build. Run menjalankan program yang sudah berhasil di-build. Kalau program tidak mau jalan atau hasil build lama mengganggu, clean menghapus hasil build sebelumnya dan project dibangun ulang dari awal.

#### 3. Pesan Error
Kesalahan kode muncul sebagai pesan error di panel Build messages, lengkap dengan nomor baris dan jenis kesalahannya. Contoh yang sering terjadi adalah lupa titik koma di akhir pernyataan. Baris yang ditunjuk pesan bisa berbeda dari baris yang salah, jadi periksa juga baris sebelumnya.

### B. Bahasa Pemrograman C++<br/>
Bjarne Stroustrup mengembangkan C++ pada 1979 sebagai perluasan bahasa C[2]. Nama awalnya "C with Classes", karena C++ menambahkan dukungan pemrograman berorientasi objek pada C[2]. Dewi menyebut C++ sebagai bahasa hybrid dari C[4]. ISO menetapkan C++ sebagai standar pada 1998 (C++98), dan bahasa ini berkembang lewat C++11, C++14, C++17, dan C++20[2]. Programmer memakainya untuk perangkat lunak sistem, game, dan aplikasi lain[2]. C++ adalah bahasa yang dikompilasi dan muncul di banyak mata kuliah dasar, karena belajar C++ berarti belajar dasar pemrograman[3].

#### 1.Struktur Program dan Identifier
Materi dasar C++ meliputi struktur program, elemen dasar bahasa, dan library[4][5]. Program C++ terdiri dari deklarasi library (misalnya `#include <iostream>`), deklarasi variabel atau konstanta, dan fungsi utama `main()`. Setiap pernyataan berakhir dengan titik koma. Komentar satu baris memakai `//`, komentar beberapa baris memakai `/* ... */`. Identifier adalah nama untuk variabel, konstanta, atau fungsi. Nama itu harus diawali huruf atau garis bawah, tidak boleh memuat spasi maupun operator, dan tidak boleh sama dengan kata kunci C++[1]. C++ membedakan huruf besar dan kecil (case sensitive).

#### 2. Tipe Data, Variabel, Konstanta, serta Input dan Output
Variabel menyimpan nilai. Kita mendeklarasikannya dengan menulis tipe data lalu nama variabel[1]. Tipe data dasar yang sering dipakai: `int` untuk bilangan bulat, `double` dan `float` untuk bilangan desimal, `char` untuk satu karakter, `string` untuk teks, dan `bool` untuk nilai benar atau salah[1]. Aturan tipe data di C++ ketat. Kesalahan tipe data bisa menghentikan program atau menghasilkan hasil yang salah[2]. Konstanta menyimpan nilai yang tetap selama program berjalan dan dideklarasikan dengan kata kunci `const`. `cin` dengan operator `>>` membaca input, dan `cout` dengan operator `<<` menampilkan output. Keduanya berasal dari library `iostream`. `endl` atau `\n` memindahkan output ke baris baru.


#### 3. Operator, Percabangan, dan Perulangan
C++ punya operator aritmetika, penugasan, perbandingan (relasi), dan logika[1]. Operator aritmetika terdiri dari penjumlahan, pengurangan, perkalian, pembagian, dan modulus. Pembagian dua `int` menghasilkan bilangan bulat. Untuk mendapat hasil desimal, salah satu operand harus bertipe pecahan atau dikonversi dengan type casting.

Struktur runtunan mengerjakan perintah secara berurutan. Struktur pemilihan (percabangan) memeriksa kondisi dulu, lalu memilih perintah yang dijalankan[6]. Konstruksinya: IF-THEN untuk satu aksi, IF-THEN-ELSE untuk dua aksi, bentuk bertingkat untuk tiga aksi atau lebih, dan CASE[6]. C++ menuliskannya sebagai `if`, `if-else`, dan `switch-case`[6].

Perulangan menjalankan sekelompok perintah berulang kali selama kondisi terpenuhi. C++ menyediakan `for` dan `while`[6]. `do-while` memeriksa kondisi di akhir, jadi perintahnya jalan minimal sekali.

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
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot output_soal1_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output1.png?raw=true)

##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output1.png?raw=true)

penjelasan unguided 1 
Program ini digunakan untuk menghitung dua bilangan yang dimasukkan. Setelah angka dimasukkan, program akan menghitung penjumlahan, pengurangan, perkalian, dan pembagian, lalu hasilnya ditampilkan ke layar.

### 2. (isi dengan soal unguided 2)

```C++
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
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output2.png?raw=true)


##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output2.png?raw=true)

penjelasan unguided 2
Program ini digunakan untuk mengubah angka menjadi tulisan. Angka yang dimasukkan harus dari 0 sampai 100, kemudian program akan menampilkan nama angka tersebut, misalnya 79 menjadi tujuh puluh sembilan.

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = n; i >= 1; i--){

        for(int j = n; j > i; j--){
            cout << "  ";
        }

        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }

        cout << "* ";

        for(int j = 1; j <= i; j++){
            cout << j;

            if(j < i)
                cout << " ";
        }

        cout << endl;
    }

    for(int i = 0; i < n; i++){
        cout << "  ";
    }

    cout << "*";

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output3.png?raw=true)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/widi-ui/109082500108_Hananto-Widi-Utomo/blob/main/Modul1/Output/output3.png?raw=true)

penjelasan unguided 3
Program ini digunakan untuk membuat pola angka seperti bentuk mirror. Angka yang dimasukkan menentukan banyaknya baris, kemudian program mengatur spasi, angka, dan tanda bintang menggunakan perulangan sampai membentuk pola yang sesuai.

## Kesimpulan
Dari praktikum ini, saya jadi lebih memahami penggunaan Code Blocks untuk membuat dan menjalankan program C++. Selain itu, saya juga memahami penggunaan tipe data, input dan output, operator, percabangan, serta perulangan. Dari tiga soal yang dikerjakan, saya belajar membuat program untuk melakukan operasi hitung, mengubah angka menjadi tulisan, dan membuat pola angka menggunakan perulangan.

## Referensi
[1] A. Ma'arif, *Dasar Pemrograman C++* (Buku Ajar). Yogyakarta: Program Studi Teknik Elektro, Universitas Ahmad Dahlan. [Online]. Tersedia: https://eprints.uad.ac.id/32726/
<br>[2] Q. M. F. Z. Effendi, T. R. Zuhura, M. S. A. F. Amrulloh, F. Y. Arafat, M. Haris, N. R. Wahyudi, I. M. Putra, dan K. Ramadhan, "Penggunaan Bahasa C++ dalam Perkuliahan Jurusan Teknik Elektro Fakultas Teknik," *Jurnal Majemuk*, vol. 3, no. 1, hlm. 143–151, Mar. 2024.
<br>[3] I. Ramadhana dan B. Sujatmiko, "Pengembangan Aplikasi Kamus Bahasa Pemrograman C++ Berbasis Android untuk Meningkatkan Kompetensi Kognitif Mata Kuliah Struktur Data," *IT-Edu*, vol. 3, no. 1, hlm. 85–92, 2018.
<br>[4] L. J. Erawati Dewi, "Media Pembelajaran Bahasa Pemrograman C++," *Jurnal Pendidikan Teknologi dan Kejuruan*, vol. 7, no. 1, Apr. 2012. doi: 10.23887/jptk-undiksha.v7i1.31.
<br>[5] A. Imamuddin, M. A. Sobarnas, dan Nurkholis, "Pembelajaran Jarak Jauh Pemrograman Dasar Menggunakan Bahasa C++ untuk Umum: Sebuah Program Pengabdian kepada Masyarakat," *Jurnal BEMAS*, 2021.
<br>[6] U. Indahyati dan Y. Rahmawati, *Buku Ajar Algoritma dan Pemrograman dalam Bahasa C++*. Sidoarjo: Umsida Press, 2020. doi: 10.21070/2020/978-623-6833-67-4.
