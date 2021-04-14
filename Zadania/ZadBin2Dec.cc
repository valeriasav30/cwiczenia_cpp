#include <iostream>
#include <cmath>

using namespace std;

int Bin2Dec(int n) {
	int i = 0;
	int rem = 0;
	int dec = 0;

	while (n!=0) {
		rem = n%10;
		n /= 10;
		dec += rem*pow(2, i);
		i++;
	}
	return dec;
}


int main(int argc, char *argv[]) {
	cout << Bin2Dec(101010) << endl;

	return 0;
}
