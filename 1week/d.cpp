#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string word) {
    stack<char> st;
    for (auto i: word) {
        if (st.empty()) {
            st.push(i);
        } else if (st.top() != i) {
            st.push(i);
        } else if (st.top() == i) {
            st.pop();
        }
    }

    return st.empty();
}


int main() {
    string word;
    cin >> word;

    cout << (isBalanced(word) ? "Yes" : "No");
    return 0;
}
