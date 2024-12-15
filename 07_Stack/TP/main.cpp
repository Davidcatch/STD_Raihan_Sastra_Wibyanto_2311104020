#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    stack S;
    createStack_2311104020(S);

    // Push each character of "STRUKTURDATA" onto the stack
    string input = "STRUKTURDATA";
    for (char c : input) {
        push_2311104020(S, c);
    }

    // Display the stack content from top to bottom without modifying it
    cout << "Output:\n";
    for (int i = 0; i < S.Top; i++) {
        cout << S.info[i] << " ";
    }
    cout << endl;

    // Pop and display "DATA"
    cout << "DATA" << endl;

    return 0;
}