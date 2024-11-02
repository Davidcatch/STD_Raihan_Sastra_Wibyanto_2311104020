#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoubleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertLast_2311104020(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward_2311104020() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward_2311104020() {
        Node* temp = tail;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->prev != nullptr) cout << " <-> ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoubleLinkedList dll;

    dll.insertLast_2311104020(1);
    dll.insertLast_2311104020(2);
    dll.insertLast_2311104020(3);
    dll.insertLast_2311104020(4);

    cout << "Daftar elemen dari depan ke belakang: ";
    dll.displayForward_2311104020();  

    cout << "Daftar elemen dari belakang ke depan: ";
    dll.displayBackward_2311104020(); 

    return 0;
}
