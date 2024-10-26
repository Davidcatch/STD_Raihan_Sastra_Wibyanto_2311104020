#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node** head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void bubbleSort(Node* head) {
    if (head == nullptr) return;

    bool swapped;
    Node* current;
    Node* lastSorted = nullptr;  

    do {
        swapped = false;
        current = head;

        while (current->next != lastSorted) {
            if (current->data < current->next->data) {

                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        lastSorted = current; 
    } while (swapped);
}

int main() {
    Node* head = nullptr;

    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 4);

    cout << "List before sorting: ";
    printList(head);

    bubbleSort(head);

    cout << "List after sorting in descending order: ";
    printList(head);

    return 0;
}
