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
