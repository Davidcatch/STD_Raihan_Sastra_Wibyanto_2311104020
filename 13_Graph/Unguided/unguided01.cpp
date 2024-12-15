#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    string kota[100];
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> kota[i];
    }

    int jarak[100][100];
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            if (i == j) {
                jarak[i][j] = 0;
            } else {
                cout << kota[i] << " --> " << kota[j] << " : ";
                cin >> jarak[i][j];
            }
        }
    }

    cout << "\nAdjacency Matrix:" << endl;
    cout << "      ";
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << kota[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul; i++) {
        cout << kota[i] << " ";
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << " " << jarak[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
