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

// Fungsi untuk menghapus node dengan nilai tertentu
void deleteNode(Node*& head, int nilai) {
    if (head == nullptr) {
        cout << "Linked list kosong, tidak ada node yang bisa dihapus." << endl;
        return;
    }

    // Jika node yang akan dihapus adalah node pertama
    if (head->data == nilai) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node dengan nilai " << nilai << " telah dihapus." << endl;
        return;
    }

    // Mencari node yang akan dihapus
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != nilai) {
        temp = temp->next;
    }

    // Jika node ditemukan
    if (temp->next != nullptr) {
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    } else {
        cout << "Node dengan nilai " << nilai << " tidak ditemukan." << endl;
    }
}

// Fungsi untuk mencetak linked list
void cetakLinkedList(Node* head) {
    if (head == nullptr) {
        cout << "Linked list kosong." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr; 

    // Operasi yang dilakukan pada linked list
    insertDepan(head, 10);   // Tambah node di depan (nilai: 10)
    insertBelakang(head, 20); // Tambah node di belakang (nilai: 20)
    insertDepan(head, 5);    // Tambah node di depan (nilai: 5)

    // Hapus node dengan nilai 10
    deleteNode(head, 10);    

    
    // Mencetak setelah penghapusan node
    cetakLinkedList(head);

    return 0;
}
