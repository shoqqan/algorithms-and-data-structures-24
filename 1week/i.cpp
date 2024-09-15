#include <iostream>
#include <list>
#include <map>
using namespace std;

int main() {
    list<char> teams;
    int katsuragiKillCounter = 0;
    int sakayanagiKillCounter = 0;
    map<char, int> livesTeams;
    livesTeams['K'] = 0;
    livesTeams['S'] = 0;

    int n;
    cin >> n;
    string votes;
    cin >> votes;

    for (int i = 0; i < votes.length(); i++) {
        switch (votes[i]) {
            case 'K':
                livesTeams['K']++;
                break;
            case 'S':
                livesTeams['S']++;
                break;
            default:
                break;
        }
        teams.push_back(votes[i]);
    }
    auto it = teams.begin();
    while (teams.size() != 1 && livesTeams['K'] > 0 && livesTeams['S'] > 0) {
        if (*it == 'K') {
            if (katsuragiKillCounter > 0) {
                it = teams.erase(it);
                katsuragiKillCounter--;
                livesTeams['K']--;
            } else {
                sakayanagiKillCounter++;
                ++it;
            }
        } else {
            if (sakayanagiKillCounter > 0) {
                it = teams.erase(it);
                sakayanagiKillCounter--;
                livesTeams['S']--;
            } else {
                katsuragiKillCounter++;
                ++it;
            }
        }
        if (it == teams.end()) {
            it = teams.begin();
        }
    }
    if (*teams.begin() == 'K') {
        cout << "KATSURAGI" << endl;
    } else {
        cout << "SAKAYANAGI" << endl;
    }
    return 0;
}
