#include <iostream>
using namespace std;

// Struktur node untuk Linked List
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambah node di depan
void insertDepan(Node*& head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menambah node di belakang
void insertBelakang(Node*& head, int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Fungsi untuk mencari node dengan nilai tertentu
bool cariNode(Node* head, int nilai) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == nilai) {
            return true; 
        }
        temp = temp->next;
    }
    return false; 
}

// Fungsi untuk menghitung panjang linked list
int hitungPanjang(Node* head) {
    int panjang = 0;
    Node* temp = head;
    while (temp != nullptr) {
        panjang++;
        temp = temp->next;
    }
    return panjang;
}


int main() {
    Node* head = nullptr; 

    // Tambah beberapa node
    insertDepan(head, 10);   // Tambah node di depan (nilai: 10)
    insertBelakang(head, 20); // Tambah node di belakang (nilai: 20)
    insertDepan(head, 5);    // Tambah node di depan (nilai: 5)

    // Cari node dengan nilai 20
    int nilaiCari = 20;
    if (cariNode(head, nilaiCari)) {
        cout << "Node dengan nilai " << nilaiCari << " ditemukan." << endl;
    } else {
        cout << "Node dengan nilai " << nilaiCari << " tidak ditemukan." << endl;
    }

    
    int panjang = hitungPanjang(head);
    cout << "Panjang Linked List: " << panjang << endl;

    return 0;
}
