#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	int shift = atoi(argv[1]);
    shift = shift % 26;
    string line;
    string encoded = "";
    while (getline(cin, line)) {
        for (char ch : line) {

            ch = toupper(ch);
