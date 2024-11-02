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

public:
    DoubleLinkedList() {
        head = nullptr;
    }

    void insertFirst_2311104020(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertLast_2311104020(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteFirst_2311104020() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        if (head->next == nullptr) { 
            head = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void deleteLast_2311104020() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        if (head->next == nullptr) {
            head = nullptr;
        } else {
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->prev->next = nullptr;
        }
        delete temp;
    }

    void display_2311104020() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoubleLinkedList dll;

    dll.insertFirst_2311104020(15);  
    dll.insertFirst_2311104020(10);   
    dll.insertLast_2311104020(20);   

    cout << "DAFTAR ANGGOTA LIST: ";
    dll.display_2311104020();  

    dll.deleteFirst_2311104020();    
    dll.deleteLast_2311104020();     

    cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: ";
    dll.display_2311104020();  

    return 0;
}