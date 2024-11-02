#include <iostream>
using namespace std;

void reverseWord(string word) {
    char stack[100];  
    int top = -1;     

    for (char c : word) {
        top++;
        stack[top] = c;
    }

    while (top >= 0) {
        cout << stack[top];
        top--;
    }
    cout << " "; 
}

int main() {
    string sentence;
    cout << "Masukkan Kata: ";
    getline(cin, sentence);  

    string word = "";
    cout << "Datastack Array:\nData : ";
    
    for (char c : sentence) {
        if (c == ' ') {
            reverseWord(word);
            word = "";  
        } else {
            word += c;  
        }
    }

    reverseWord(word);

    return 0;
}
