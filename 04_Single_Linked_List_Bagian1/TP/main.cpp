#include <iostream>
#include "List.h"
using namespace std;

int main()
{
  List L;

  // 1. Panggilah Create List
  createList(L);

/*   // 2. Buat Sintak menanyakan angka pertama yang ingin diinputkan user ke list
  int angka ;
  cout << "Masukkan angka pertama: ";
  cin >> angka;

  // 3. Panggil fungsi allocate agar data tersebut dijadikan elemen
  address P = allocate(angka);

  // 4. Panggil procedure insert first yang telah dibuat
  insertFirst(L, P);

  // 5. panggil procedure show info untuk mengecek apakah angka tersebut berhasil menjadi elemen di List.
  cout << "Isi list setelah insert pertama: ";
  printInfo(L);

  // 6. buat kembali sintak no 2 s/d no 5 untuk data  angka kedua dari user
  cout << "Masukkan angka kedua: ";
  cin >> angka;
  P = allocate(angka);
  insertFirst(L, P);
  cout << "Isi list setelah insert kedua: ";
  printInfo(L);

  // 7. buat kembali sintak no 2 s/d no 5 untuk data angka ketiga dari user
  cout << "Masukkan angka kedua: ";
  cin >> angka;
  P = allocate(angka);
  insertFirst(L, P);
  cout << "Isi list setelah insert ketiga: "; 
  printInfo(L); */



cout << ("\n");
/* SOAL NO 7 */
    int nim, digit;
    cout << "Masukkan NIM per digit:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Digit " << i << ": ";
        cin >> digit;

        // Buat node baru dan masukkan di akhir list
        address P = allocate(digit);
        insertLast(L, P);  // Gunakan insertLast agar urutan tidak terbalik
    }

    // Cetak isi list (NIM)
    cout << "Isi list: ";
    printInfo(L);  // Menampilkan NIM yang diinput
    cout << endl; 

  return 0;
}
