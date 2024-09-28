/* print */
/** 
#include <iostream>
using namespace std;
int main()
{
    cout << "saya lagi belajar c++ nih!" << endl;
    return 0;
}
*/

/*input output*/
/** 
#include <iostream>
using namespace std;
int main()
{

    int inp;
    cin >> inp;
    cout << "nilai = " << inp;
    return 0;
}
*/

/* Data Type Float*/
/** 
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float W, X, Y;
    float Z;
    X = 7; Y = 3; W = 1;
    Z = (X + Y)/(Y + W);
    cout<< "nilai z = " << Z << endl;

    return 0;
}
*/

/* IF ELSE*/
/** 
#include <iostream>
using namespace std;
int main()
{
    double tot_pembelian, diskon;
    cout<<"total_pembelian: Rp ";
    cin>>tot_pembelian;
    diskon = 0;
    if(tot_pembelian >= 100000)
        diskon = 0.05 * tot_pembelian;
    else
        diskon = 0;
    cout<<"besar diskon = Rp " << diskon;
    return 0;
}
*/

/* Switch Case*/
/** 
#include <iostream>
using namespace std;

int main ()
{
    int kode_hari;
    puts("Menentukan hari\n");
    puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
    puts("2=Selasa 4=Kamis 6=Sabtu ");
    cin >> kode_hari;
    switch (kode_hari)
    {
    case  1: // constant-expression 
      puts("Hari Senin");
      break;
    case  2: // constant-expression 
      puts("Hari Selasa");
      break;
    case  3: // constant-expression 
      puts("Hari Rabu");
      break;
    case  4: // constant-expression 
      puts("Hari Kamis");
      break;
    case  5: // constant-expression 
      puts("Hari Jumat");
      break;
    case  6: // constant-expression 
      puts("Hari Sabtu");
      break;
    case  7: // constant-expression 
      puts("Hari Minggu");
      break;
    default:
      puts("Kode masukan salah!!!");
    }
}
*/

/* Do While*/

#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int i = 1;
    int jum;
    cin>>jum;
    do{
        cout<<"baris ke-"<<i+1<<endl;
        i++;
    }while(i<jum);
    getch();
    return 0;
}

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
/**
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
*/


