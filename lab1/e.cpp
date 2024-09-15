#include <deque>
#include <iostream>

using namespace std;

int main() {
    deque<int> b;
    deque<int> n;
    int operations = 0;
    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;
        if (i < 5) {
            b.push_back(temp);
        } else {
            n.push_back(temp);
        }
    }
    while (!b.empty() && !n.empty() && operations < 1000000) {
        operations++;
        if (b.front() == 0 && n.front() == 9) {
            int temp = b.front();
            b.pop_front();
            b.push_back(temp);
            temp = n.front();
            n.pop_front();
            b.push_back(temp);
        } else if (n.front() == 0 && b.front() == 9) {
            int temp = b.front();
            b.pop_front();
            n.push_back(temp);
            temp = n.front();
            n.pop_front();
            n.push_back(temp);
        } else if (b.front() > n.front()) {
            int temp = b.front();
            b.pop_front();
            b.push_back(temp);
            temp = n.front();
            n.pop_front();
            b.push_back(temp);
        } else if (n.front() > b.front()) {
            int temp = b.front();
            b.pop_front();
            n.push_back(temp);
            temp = n.front();
            n.pop_front();
            n.push_back(temp);
        }
    }
    if (operations >= 1000000) {
        cout << "blin nichya" << endl;
    }
    if (b.empty()) {
        cout << "Nursik " << operations << endl;
    } else {
        cout << "Boris " << operations << endl;
    }
    return 0;
}
