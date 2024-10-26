#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menyisipkan node baru dalam urutan yang sudah terurut
void insertSorted(Node** head, Node* newNode) {
    Node* current = *head;
    Node* prev = nullptr;
    bool found = false;

    // Menelusuri list untuk menemukan posisi yang tepat bagi nodeBaru
    while (current != nullptr && !found) {
        if (current->data > newNode->data) {
            found = true;
        } else {
            prev = current;
            current = current->next;
        }
    }

    // Menyisipkan node Baru di awal jika harus menjadi kepala baru
    if (prev == nullptr) {
        newNode->next = *head;
        *head = newNode;
    }
    // Menyisipkan node Baru di akhir jika sekarang adalah null
    else if (current == nullptr) {
        prev->next = newNode;
        newNode->next = nullptr;
    }
    // Menyisipkan node Baru di antara sebelumnya dan sekarang
    else {
        prev->next = newNode;
        newNode->next = current;
    }
}

// Fungsi untuk mencetak isi list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert elements in sorted order
    insertSorted(&head, createNode(3));
    insertSorted(&head, createNode(1));
    insertSorted(&head, createNode(4));
    insertSorted(&head, createNode(2));
    insertSorted(&head, createNode(5));

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
