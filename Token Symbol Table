#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool isLetterOrDigit(char c) {
    return isLetter(c) || isDigit(c);
}


bool isOp(char c) {
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='='||
           c=='<'||c=='>'||c=='!'||c=='%'||
           c=='&'||c=='|'||c=='^';
}

bool isPunc(char c) {
    return c=='('||c==')'||c=='{'||c=='}'||c=='['||c==']'||c==','||c==';';
}


bool isKeyword(const string &s) {
    string keywords[] = {"int","float","double","char","void",
                         "return","if","else","while","for",
                         "break","continue","long","short",
                         "signed","unsigned","bool","true","false",
                         "class","struct"};
    for (string k : keywords)
        if (s == k) return true;
    return false;
}

int main() {
    ifstream file("new sample.txt");
    if (!file.is_open()) {
        cout << "Cannot open file.\n";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        for (size_t i = 0; i < line.size(); i++) {
            char c = line[i];
            if (c==' '||c=='\t'||c=='\n') continue;
            string token;

            if (isLetter(c) || c=='_') {
                while (i<line.size() && (isLetterOrDigit(line[i])||line[i]=='_')) {
                    token += line[i]; i++;
                } i--;
                if (isKeyword(token)) cout << token << " -> Keyword\n";
                else cout << token << " -> Identifier\n";
                continue;
            }


            if (isDigit(c)) {
                while (i<line.size() && isDigit(line[i])) {
                    token += line[i]; i++;
                } i--;
                cout << token << " -> Constant\n";
                continue;
            }


            if (c=='"') {
                token += '"'; i++;
                while (i<line.size() && line[i]!='"') { token+=line[i]; i++; }
                token += '"';
                cout << token << " -> Constant (String)\n";
                continue;
            }


            if (isOp(c)) {
                token += c;
                if (i+1<line.size() && isOp(line[i+1])) { token += line[i+1]; i++; }
                cout << token << " -> Operator\n";
                continue;
            }


            if (isPunc(c)) {
                cout << c << " -> Punctuation\n";
                continue;
            }
        }
    }

    cout << "\nAnalysis Complete.\n";
    return 0;
}
