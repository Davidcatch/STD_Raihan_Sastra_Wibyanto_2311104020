#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int nim;
    Student* next;
};

Student* head = nullptr;

bool isEmpty() {
    return head == nullptr;
}

void enqueue(string name, int nim) {
    Student* newStudent = new Student();
    newStudent->name = name;
    newStudent->nim = nim;
    newStudent->next = nullptr;

    if (isEmpty() || nim < head->nim) {
        newStudent->next = head;
        head = newStudent;
    } else {
        Student* current = head;
        while (current->next != nullptr && current->next->nim <= nim) {
            current = current->next;
        }
        newStudent->next = current->next;
        current->next = newStudent;
    }
    cout << "Data " << name << " dengan NIM " << nim << " masuk ke antrian" << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        Student* temp = head;
        cout << "Data " << head->name << " dengan NIM " << head->nim << " keluar dari antrian" << endl;
        head = head->next;
        delete temp;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Antrian Kosong" << endl;
    } else {
        Student* current = head;
        while (current != nullptr) {
            cout << "Nama: " << current->name << ", NIM: " << current->nim << endl;
            current = current->next;
        }
    }
}

int main() {
    int choice;

    do {
        cout << "\nMenu Antrian" << endl;
        cout << "1. Tambah Mahasiswa ke Antrian" << endl;
        cout << "2. Hapus Mahasiswa dari Antrian" << endl;
        cout << "3. Tampil Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int nim;
            cout << "Masukkan Nama Mahasiswa: ";
            cin.ignore();
            getline(cin, name);
            cout << "Masukkan NIM Mahasiswa: ";
            cin >> nim;
            enqueue(name, nim);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            cout << "Terima Kasih" << endl;
        } else {
            cout << "Pilihan tidak tersedia" << endl;
        }
    } while (choice != 4);

    return 0;
}