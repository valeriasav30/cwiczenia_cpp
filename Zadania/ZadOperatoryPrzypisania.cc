#include <iostream>

using namespace std;

void A() {
	int var1 = 3;
	int var2 = 3;

	cout << var2*++var1 * 2 << endl;
}
void B() {
	int var1 = 3;

	var1 *= 10;
	var1 /= 3;

	cout << var1 << endl;
}
int main() {
	
	cout << "A:" << endl;
	A();
	cout << "B:" << endl;
	B();

	return 0;
}
