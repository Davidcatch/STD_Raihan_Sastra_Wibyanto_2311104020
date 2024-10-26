#include <iostream>
using namespace std;

// Struktur Node untuk Single Linked List
struct Node {
    int data;
    Node* next;
};

// Kelas SingleLinkedList untuk menangani operasi-operasi pada SLL
class SingleLinkedList {
private:
    Node* head;

public:
    SingleLinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambah elemen ke dalam linked list
    void addElement(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode; // Menjadikan elemen pertama
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode; // Menambah elemen di akhir list
        }
    }

    // Fungsi untuk mencari elemen dalam linked list
    void searchElement(int value) {
        Node* current = head;  // Inisialisasi pointer current ke head
        int position = 1;      // Inisialisasi posisi ke 1

        // Melakukan pencarian linear pada linked list
        while (current != nullptr) {
            if (current->data == value) {
                // Jika elemen ditemukan, tampilkan alamat dan posisinya
                cout << "Elemen " << value << " ditemukan di alamat: " << current << ", pada posisi ke-" << position << endl;
                return;
            }
            // Bergerak ke node berikutnya dan menambah posisi
            current = current->next;
            position++;
        }

        // Jika elemen tidak ditemukan
        cout << "Elemen " << value << " tidak ditemukan dalam list." << endl;
    }

    // Fungsi untuk menampilkan semua elemen dalam list
    void displayList() {
        Node* temp = head;
        if (head == nullptr) {
            cout << "List kosong." << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SingleLinkedList list;
    int input, searchValue;

    // Meminta pengguna memasukkan 6 elemen
    cout << "Masukkan 6 elemen integer ke dalam linked list: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Elemen " << i+1 << ": ";
        cin >> input;
        list.addElement(input);
    }

    // Menampilkan list
    cout << "\nDaftar elemen dalam list: " << endl;
    list.displayList();

    // Meminta pengguna memasukkan elemen yang ingin dicari
    cout << "\nMasukkan nilai elemen yang ingin dicari: ";
    cin >> searchValue;

    // Mencari elemen dalam list
    list.searchElement(searchValue);

    return 0;
}
