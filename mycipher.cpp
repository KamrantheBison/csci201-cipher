#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	// get shift from command line
	int shift = atoi(argv[1]);
    shift = shift % 26;
    string line;
    string encoded = "";
    // read from stdin
    while (getline(cin, line)) {
        for (char ch : line) {

            ch = toupper(ch);

	    // only keep letters
	     if (ch >= 'A' && ch <= 'Z') {
                int pos = ch - 'A';
                int newPos = (pos + shift) % 26;
                encoded += char(newPos + 'A');
            }
        }
    }
