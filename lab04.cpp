#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para std::transform
#include <cctype>    // Para std::tolower

using namespace std;

int main() {
    vector<string> wordVector;
    string word;
    cout << "Enter the words you want to order lexicographically, To finish putting words (exit)\n" << "\nWord that you want register: ";
    while (cin >> word) {
        if (word == "exit") {
            break;
        }
        // Convertir la palabra a minúsculas
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordVector.push_back(word);
        cout << "\nWord that you want register: ";
    }
    for (size_t i = 0; i < wordVector.size(); i++) {
        for (size_t j = 0; j < wordVector.size() - 1; j++) {
            if (wordVector[j] > wordVector[j + 1]) {
                string temp = wordVector[j];
                wordVector[j] = wordVector[j + 1];
                wordVector[j + 1] = temp;
            }
        }
    }
    cout << "\nlexicographically ordered words \n";
    for (string p : wordVector) {
        cout << p << endl;
    }
    return 0;
}
