#include <iostream>
#include <deque>
using namespace std;


int main() {
    deque<int> q;
    char temp;
    int num;
    while (temp != '!') {
        cin >> temp;
        switch (temp) {
            case '+':
                cin >> num;
                q.push_front(num);
                break;
            case '-':
                cin >> num;
                q.push_back(num);
                break;
            case '*':
                switch (q.size()) {
                    case 0:
                        cout << "error" << endl;
                        break;
                    case 1:
                        cout << q.front() + q.back() << endl;
                        q.pop_front();
                        break;
                    default:
                        cout << q.front() + q.back() << endl;
                        q.pop_front();
                        q.pop_back();
                        break;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
