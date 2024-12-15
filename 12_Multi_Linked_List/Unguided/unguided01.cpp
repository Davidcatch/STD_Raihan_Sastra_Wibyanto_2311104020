#include <iostream>
#include <string>

using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;
    Proyek* nextProyek;
};

struct Pegawai {
    string namaPegawai;
    string idPegawai;
    Proyek* headProyek;
    Pegawai* nextPegawai;
};

void tambahPegawai(Pegawai*& head, string nama, string id) {
    Pegawai* newPegawai = new Pegawai;
    newPegawai->namaPegawai = nama;
    newPegawai->idPegawai = id;
    newPegawai->headProyek = nullptr;
    newPegawai->nextPegawai = head;
    head = newPegawai;
}

void tambahProyek(Pegawai* head, string idPegawai, string namaProyek, int durasi) {
    while (head != nullptr) {
        if (head->idPegawai == idPegawai) {
            Proyek* newProyek = new Proyek;
            newProyek->namaProyek = namaProyek;
            newProyek->durasi = durasi;
            newProyek->nextProyek = head->headProyek;
            head->headProyek = newProyek;
            return;
        }
        head = head->nextPegawai;
    }
}

void hapusProyek(Pegawai* head, string idPegawai, string namaProyek) {
    while (head != nullptr) {
        if (head->idPegawai == idPegawai) {
            Proyek* curr = head->headProyek;
            Proyek* prev = nullptr;

            while (curr != nullptr) {
                if (curr->namaProyek == namaProyek) {
                    if (prev == nullptr) {
                        head->headProyek = curr->nextProyek;
                    } else {
                        prev->nextProyek = curr->nextProyek;
                    }
                    delete curr;
                    return;
                }
                prev = curr;
                curr = curr->nextProyek;
            }
        }
        head = head->nextPegawai;
    }
}

void tampilkanData(Pegawai* head) {
    while (head != nullptr) {
        cout << "Pegawai: " << head->namaPegawai << " (ID: " << head->idPegawai << ")" << endl;
        Proyek* curr = head->headProyek;
        while (curr != nullptr) {
            cout << "  - Proyek: " << curr->namaProyek << ", Durasi: " << curr->durasi << " bulan" << endl;
            curr = curr->nextProyek;
        }
        head = head->nextPegawai;
        cout << endl;
    }
}

int main() {
    Pegawai* headPegawai = nullptr;

    tambahPegawai(headPegawai, "Andi", "P001");
    tambahPegawai(headPegawai, "Budi", "P002");
    tambahPegawai(headPegawai, "Citra", "P003");

    tambahProyek(headPegawai, "P001", "Aplikasi Mobile", 12);
    tambahProyek(headPegawai, "P002", "Sistem Akuntansi", 8);
    tambahProyek(headPegawai, "P003", "E-commerce", 10);

    tambahProyek(headPegawai, "P001", "Analisis Data", 6);

    hapusProyek(headPegawai, "P001", "Aplikasi Mobile");

    tampilkanData(headPegawai);

    return 0;
}
