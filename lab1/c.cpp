#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstWord, secondWord;
    cin >> firstWord >> secondWord;
    deque<char> word1Deq, word2Deq;

    for (char c: firstWord) {
        if (c != '#') {
            word1Deq.push_back(c);
        } else if (!word1Deq.empty()) {
            word1Deq.pop_back();
        }
    }

    for (char c: secondWord) {
        if (c != '#') {
            word2Deq.push_back(c);
        } else if (!word2Deq.empty()) {
            word2Deq.pop_back();
        }
    }

    bool isEqual = (word1Deq.size() == word2Deq.size());
    for (size_t i = 0; isEqual && i < word1Deq.size(); ++i) {
        if (word1Deq[i] != word2Deq[i]) {
            isEqual = false;
        }
    }

    cout << (isEqual ? "Yes" : "No") << endl;

    return 0;
}
