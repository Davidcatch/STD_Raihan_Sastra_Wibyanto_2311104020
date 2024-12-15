#include <iostream>

using namespace std;

int main() {
    int jumlahSimpul, jumlahSisi;
    cout << "Masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    cout << "Masukkan jumlah sisi: ";
    cin >> jumlahSisi;

    int adjacencyMatrix[100][100] = {0};

    cout << "Masukkan pasangan simpul:" << endl;
    for (int i = 0; i < jumlahSisi; i++) {
        int simpul1, simpul2;
        cin >> simpul1 >> simpul2;
        adjacencyMatrix[simpul1 - 1][simpul2 - 1] = 1;
        adjacencyMatrix[simpul2 - 1][simpul1 - 1] = 1;
    }

    cout << "\nAdjacency Matrix:" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
