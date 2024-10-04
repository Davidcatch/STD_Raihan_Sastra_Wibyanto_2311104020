#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    
    cout << "Masukkan ukuran dimensi (x, y, z): ";
    cin >> x >> y >> z;
    
    int array3D[x][y][z];
    
    cout << "Masukkan elemen array 3D:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "Array 3D yang dimasukkan: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
