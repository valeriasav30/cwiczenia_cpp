#include <iostream>
#include <string>
using namespace std;

void One() {
	cout << "Mam" << endl;
}

void Two() {
	cout << "5" << endl;
}

void Three() {
	cout << "funkcje!" << endl;
}

extern "C" void Four(){
	printf("Print code");
}

extern "C" void Five();

int main(int argc, char *argv[]) {
	for (int i = 1; i<argc; i++) {
		string c = argv[i];
		if (c == "One") { One();}
		else if (c == "Two"){Two();}
		else if (c == "Three"){Three();}
		else if (c == "Four"){Four();}
		else if (c == "Five"){Five();}
	}
	return 0;
}
