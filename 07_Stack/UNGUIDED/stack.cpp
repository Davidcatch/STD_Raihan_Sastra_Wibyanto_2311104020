#include <iostream>
using namespace std;

bool isPalindrome(string sentence) {

    string processed_sentence = "";
    for (char c : sentence) {
        if (c >= 'A' && c <= 'Z') {
            processed_sentence += (c + 32); 
        } else if (c >= 'a' && c <= 'z') {
            processed_sentence += c;
        }
    }


    int len = processed_sentence.length();
    for (int i = 0; i < len / 2; ++i) {
        if (processed_sentence[i] != processed_sentence[len - i - 1]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    string sentence;
    cout << "Masukan Kalimat: ";
    getline(cin, sentence); 

    if (isPalindrome(sentence)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
