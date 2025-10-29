#include<iostream>
using namespace std;

bool isNum (string s) {

    if (s.empty() ){

        return false;
    }
    if (!(isalpha(s[0]) || s[0] == ' ')){
        return false;
    }
    for (int i = 1; i <s.length(); i++ ){
       if (!(isalnum(s[i]) || s[i] == ' ')) {
            return false;
    }
        }
    return true;
}

int main() {
    string input;

    cout << "enter a string to check for valid identifier: ";
    getline(cin, input);

    if (isNum(input)) {
        cout << "valid identifier." << endl;
    } else {
        cout << "not valid identifier." << endl;
    }

    return 0;
}




