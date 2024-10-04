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

    int max = data[0], min = data[0];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        if (data[i] > max) {
            max = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }
        sum += data[i];
    }

    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << sum / n << endl;

    return 0;
}
