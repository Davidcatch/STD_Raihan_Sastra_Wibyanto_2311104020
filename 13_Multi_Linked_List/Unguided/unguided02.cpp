#include <iostream>
#include <string>
using namespace std;

struct Book {
    string judul;
    string pengembalian;
    Book* next;
};

struct Anggota {
    string name;
    string id;
    Anggota* next;
    Book* borrowedBooksHead;
};

Anggota* createAnggota(string name, string id) {
    Anggota* newAnggota = new Anggota;
    newAnggota->name = name;
    newAnggota->id = id;
    newAnggota->next = nullptr;
    newAnggota->borrowedBooksHead = nullptr;
    return newAnggota;
}

Book* createBook(string judul, string pengembalian) {
    Book* newBook = new Book;
    newBook->judul = judul;
    newBook->pengembalian = pengembalian;
    newBook->next = nullptr;
    return newBook;
}

void addAnggota(Anggota*& head, string name, string id) {
    Anggota* newAnggota = createAnggota(name, id);
    if (!head) {
        head = newAnggota;
    } else {
        Anggota* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newAnggota;
    }
}

Anggota* findAnggota(Anggota* head, string id) {
    Anggota* temp = head;
    while (temp && temp->id != id) {
        temp = temp->next;
    }
    return temp;
}

void addBook(Anggota* Anggota, string judul, string pengembalian) {
    if (!Anggota) return;
    Book* newBook = createBook(judul, pengembalian);
    if (!Anggota->borrowedBooksHead) {
        Anggota->borrowedBooksHead = newBook;
    } else {
        Book* temp = Anggota->borrowedBooksHead;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
}

void removeAnggota(Anggota*& head, string id) {
    Anggota* temp = head;
    Anggota* prev = nullptr;

    while (temp && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp) {
        if (!prev) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        Book* book = temp->borrowedBooksHead;
        while (book) {
            Book* nextBook = book->next;
            delete book;
            book = nextBook;
        }

        delete temp;
    }
}

void displayAnggotas(Anggota* head) {
    Anggota* mem = head;
    while (mem) {
        cout << "Anggota: " << mem->name << " (ID: " << mem->id << ")" << endl;
        Book* book = mem->borrowedBooksHead;
        while (book) {
            cout << "  Buku: " << book->judul << ", Pengembalian: " << book->pengembalian << endl;
            book = book->next;
        }
        mem = mem->next;
    }
}

int main() {
    Anggota* AnggotaList = nullptr;

    addAnggota(AnggotaList, "Rani", "A001");
    addAnggota(AnggotaList, "Dito", "A002");
    addAnggota(AnggotaList, "Vina", "A003");

    addBook(findAnggota(AnggotaList, "A001"), "Pemrograman C++", "01/12/2024");
    addBook(findAnggota(AnggotaList, "A002"), "Algoritma Pemrograman", "15/12/2024");

    addBook(findAnggota(AnggotaList, "A001"), "Struktur Data", "10/12/2024");

    removeAnggota(AnggotaList, "A002");

    displayAnggotas(AnggotaList);

    return 0;
}
