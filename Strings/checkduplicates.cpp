#include <iostream>
using namespace std;

void printDups(string s){

    unordered_map<char, int>count;
    for(int i = 0; i < s.length(); i++){
        count[s[i]]++;
    }
        for (auto& pair : count) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    printDups(s);

    return 0;
}