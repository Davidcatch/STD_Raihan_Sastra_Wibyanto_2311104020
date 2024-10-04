#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    
    int data[n];
    
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 == 0) {
            cout << data[i] << " ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 != 0) {
            cout << data[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
