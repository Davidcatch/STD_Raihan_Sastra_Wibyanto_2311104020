#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judulBuku;
    string tanggalPengembalian;
    Buku* nextBuku;
};

struct Anggota {
    string namaAnggota;
    string idAnggota;
    Buku* headBuku;
    Anggota* nextAnggota;
};

void tambahAnggota(Anggota*& head, string nama, string id) {
    Anggota* newAnggota = new Anggota;
    newAnggota->namaAnggota = nama;
    newAnggota->idAnggota = id;
    newAnggota->headBuku = nullptr;
    newAnggota->nextAnggota = head;
    head = newAnggota;
}

void tambahBuku(Anggota* head, string idAnggota, string judulBuku, string tanggalPengembalian) {
    while (head != nullptr) {
        if (head->idAnggota == idAnggota) {
            Buku* newBuku = new Buku;
            newBuku->judulBuku = judulBuku;
            newBuku->tanggalPengembalian = tanggalPengembalian;
            newBuku->nextBuku = head->headBuku;
            head->headBuku = newBuku;
            return;
        }
        head = head->nextAnggota;
    }
}

void hapusAnggota(Anggota*& head, string idAnggota) {
    Anggota* curr = head;
    Anggota* prev = nullptr;

    while (curr != nullptr) {
        if (curr->idAnggota == idAnggota) {
            if (prev == nullptr) {
                head = curr->nextAnggota;
            } else {
                prev->nextAnggota = curr->nextAnggota;
            }

            Buku* buku = curr->headBuku;
            while (buku != nullptr) {
                Buku* temp = buku;
                buku = buku->nextBuku;
                delete temp;
            }
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->nextAnggota;
    }
}

void tampilkanData(Anggota* head) {
    while (head != nullptr) {
        cout << "Anggota: " << head->namaAnggota << " (ID: " << head->idAnggota << ")" << endl;
        Buku* curr = head->headBuku;
        while (curr != nullptr) {
            cout << "  - Buku: " << curr->judulBuku << ", Pengembalian: " << curr->tanggalPengembalian << endl;
            curr = curr->nextBuku;
        }
        head = head->nextAnggota;
        cout << endl;
    }
}

int main() {
    Anggota* headAnggota = nullptr;

    tambahAnggota(headAnggota, "Rani", "A001");
    tambahAnggota(headAnggota, "Dito", "A002");
    tambahAnggota(headAnggota, "Vina", "A003");

    tambahBuku(headAnggota, "A001", "Pemrograman C++", "01/12/2024");
    tambahBuku(headAnggota, "A002", "Algoritma Pemrograman", "15/12/2024");
    tambahBuku(headAnggota, "A001", "Struktur Data", "10/12/2024");

    hapusAnggota(headAnggota, "A002");

    tampilkanData(headAnggota);

    return 0;
}
