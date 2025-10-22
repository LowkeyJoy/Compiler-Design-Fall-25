#include <iostream>
using namespace std;

bool isOperator(char c) {

    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=');
}

int main() {
    string input;

    cout << "enter an expression: ";
    cin >> input;

    bool foundOperator = false;


    cout << "operators found: " << endl;
    for (int i = 0; i < input.length(); i++) {
        if (isOperator(input[i])) {
            foundOperator = true;
            cout << "operator: " <<  input[i] << endl;
        }
    }


    if (!foundOperator) {
        cout << "no operators found " << endl;
    }

    return 0;
}

