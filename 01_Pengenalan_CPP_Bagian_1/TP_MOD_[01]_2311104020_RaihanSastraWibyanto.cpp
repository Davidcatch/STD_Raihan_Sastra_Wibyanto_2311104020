/* Input dan Output*/
/** 
#include <iostream>
using namespace std;

int main(){
    string nama, nim;
    cout << "Siapa nama anda? ";
    cin >> nama;
    cout << "Berapa nim anda? ";
    cin >> nim;
    cout << "Nama saya: " << nama << endl;
    cout << "NIM saya: " << nim << endl;
    return 0;
}
*/

/* Operasi Matematika */
/** 
#include <iostream>
using namespace std;

int main(){
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 <<endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 <<endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 <<endl;
    hasil1 = bil1 / bil2; // integer division
    cout << hasil1 <<endl;
    hasil1 = bil2 / bil1; //integer division
    cout << hasil1 <<endl;
    hasil1 = bil1 % bil2; // modulo
    cout << hasil1 <<endl;
    hasil1 = bil2 % bil1; // modulo
    cout << hasil1 <<endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 <<endl;
    return 0;
}
*/

/* Operasi Perbandingan */
/** 
#include <iostream>
using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}
*/

/* Operasi logika */
/**
#include <iostream>
using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 or bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or bil1 < bil2;
    cout << hasil << endl;
    return 0;
}
 */

/* Percabangan if-else */
/**
#include <iostream>
using namespace std;

int main(){
    int nilai;
    cin >> nilai;
    if (nilai > 80){
        cout << "A" << endl;
    }else{
        cout << "Bukan A" << endl;
    }
    return 0;
}
 */

/* Perulangan for-to-do */
/**
#include <iostream>
using namespace std;

int main (){
    int a, b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++){
        cout << "Bilangan" << bilangan << endl;
    }
    return 0;
}
*/

/* Perulangan while-do */
/** 
#include <iostream>
using namespace std;

int main (){
    int bilangan, asli, jumlah;

    cout << "Masukkan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli){
        if(bilangan % 2 == 0){
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}
*/

// Latihan
/* No 1 */
/**
#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    float bil1,bil2;
    cout << "Masukkan Bilangan1: ";
    cin >> bil1;
    cout <<endl;
    cout << "Masukkan Bilangan2: ";
    cin >> bil2;
    cout <<endl;

    cout << "Hasil Penjumlahan adalah " << bil1 + bil2 <<endl;
    cout << "Hasil Pengurangan adalah " << bil1 - bil2 <<endl;
    cout << "Hasil Perkalian adalah " << bil1 * bil2 <<endl;
    cout << "Hasil Pembagian adalah " << bil1 / bil2 ;

    return 0;
}
 */

/* No 2 */
/**
#include <iostream>
using namespace std;

int main() {
    // Array untuk menyimpan huruf angka
    string satuan [] = {"Nol","Satu","Dua","Tiga","Empat","Lima",
    "Enam","Tujuh","Delapan","Sembilan"};
    string belasan [] = {"Sepuluh","Sebelas","Dua Belas","Tiga Belas",
    "Empat Belas", "Lima Belas", "Enam Belas", "Tujuh Belas", "Delapan Belas", "Sembilan Belas"};
    string puluhan [] = {" "," ","Dua Puluh","Tiga Puluh", "Empat Puluh", "Lima Puluh", "Enam Puluh",
    "Tujuh Puluh", "Delapan Puluh", "Sembilan Puluh"};

    int angka; // membuat variabel angka

    // Input
    cout << "Ket : Masukkan Angka (0-100) \n";
    cout << "----------------------------------\n";
    cin >> angka;
    
    // membuat validasi angka dengan percabangan if-else
    if (angka < 0 || angka > 100){
        cout << "Angka yang anda masukkan tidak ada!!!" <<endl;
    }else if (angka == 100){
        cout << "Seratus" <<endl;
    }else if (angka >= 0 && angka <= 9){
        cout << satuan[angka] <<endl;
    }else if (angka >= 10 && angka <= 19){
        cout << belasan[angka - 10] <<endl;
    }else{
        int puluh = angka /10 ;
        int sisaAngka = angka % 10;
        cout << puluhan[puluh];
        if(sisaAngka != 0){
            cout << " " << satuan[sisaAngka];
        }
        cout <<endl;
    }
    return 0;
}
 */

/* No 3 */

#include <iostream>
using namespace std;
 
int main()
{
    int n = 3;
 
    for (int i = 1; i <= n + 1; i++) {
        
        for (int j = 1; j < i; j++)
            cout << "  ";
        for (int j = n - i + 1; j >= 1; j--) // Mencetak angka turun
            cout << j << " ";
        cout << "* ";
        for(int j = 1; j <= n - i + 1; j++) // Mencetak angka naik 
        	cout << j << " ";
        cout << endl;
    }
    return 0;
}


