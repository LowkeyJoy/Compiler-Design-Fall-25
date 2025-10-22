#include <iostream>
using namespace std;

bool isNum(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 48 || s[i] > 57) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;

    cout << "enter a number: ";
    cin >> input;

    if (isNum(input)) {
        cout << "numeric constant" << endl;
    } else {
        cout << "not  numeric constant" << endl;
    }

    return 0;
}

