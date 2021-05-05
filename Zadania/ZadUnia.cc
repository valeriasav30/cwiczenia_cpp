#include <iostream>


union Litery {
	int k1;
	float k2;
};


int main() {
	
	Litery oblicz;

	oblicz.k1 = 7;
	std::cout << oblicz.k1 << std::endl;

	oblicz.k2 = 4;
	std::cout << oblicz.k2 << std::endl;

	std::cout << oblicz.k1 << std::endl;
	return 0;
}
