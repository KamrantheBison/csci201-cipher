#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	int shift = atoi(argv[1]);
    shift = shift % 26;
