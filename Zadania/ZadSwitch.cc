#include <iostream>
using namespace std;

int main() {
	enum funkcje{A, B, C};
	funkcje i = B;

	switch(i){
	case A:
		cout << "A" << endl;
		break;
      
	case B:
		cout << "B" << endl;
		break;
      
	case C:
		cout << "C" << endl;
		break;
	}


	return 0;
}
