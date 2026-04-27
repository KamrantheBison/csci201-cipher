#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return 1;
    }

    int shift = atoi(argv[1]);
    shift = shift % 26;

    string input;
    string filtered = "";
    string line;

    while (getline(cin, line)) {
        input += line;
    }

    for (char ch : input) {
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z') {
            int pos = ch - 'A';
            int newPos = (pos + shift) % 26;
            filtered += char(newPos + 'A');
        }
    }

    for (int i = 0; i < filtered.length(); i++) {
        cout << filtered[i];

        if ((i + 1) % 5 == 0) {
            cout << " ";
        }

	if ((i + 1) % 50 == 0) {
            cout << endl;
        }
    }

    if (filtered.length() % 50 != 0) {
        cout << endl;
   }

    return 0;
}
