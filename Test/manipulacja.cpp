#include <iostream>
#include <string>
using namespace std;

int main(){
	string nap1;
	nap1 = "Wiem że ";
	string nap2("nic nie wiem");

	string nap3 = nap1+nap2;

	cout <<"nap1: "<< nap1 << endl
		   <<"nap2: "<< nap2 << endl
		   <<"nap3: "<< nap3 << endl;




	return 0;
}