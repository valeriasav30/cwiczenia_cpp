#include <iostream>
using namespace std;

namespace nasza {
	int dodaj(int a, int b){
		return a+b;
	}
	int k = 4;
}
using namespace nasza;

int main(){
	//std::cout << "Test" << std::endl;
	cout << "Test" << endl;
	int k = 8;
  cout << nasza::dodaj(k, nasza::k) << endl;
  cout << k << endl;


	return 0;
}