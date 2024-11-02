#include "stack.h"
#include <iostream>
using namespace std;

void createStack_2311104020(stack &S) {
    S.Top = 0;
}

bool isEmpty_2311104020(stack S) {
    return S.Top == 0;
}

bool isFull_2311104020(stack S) {
    return S.Top == 15;
}

void push_2311104020(stack &S, infotype x) {
    if (!isFull_2311104020(S)) {
        S.info[S.Top] = x;
        S.Top++;
    } else {
        cout << "Stack is full!" << endl;
    }
}

int pop_2311104020(stack &S) {
    if (!isEmpty_2311104020(S)) {
        S.Top--;
        return S.info[S.Top];
    } else {
        cout << "Stack is empty!" << endl;
        return -1; 
    }
}

void printInfo_2311104020(stack S) {
    for (int i = S.Top - 1; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}
