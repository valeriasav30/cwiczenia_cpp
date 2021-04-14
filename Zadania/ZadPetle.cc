#include <iostream>
using namespace std;

void funkcjaA(){
	cout << "++x" << endl;
	int x = 0;
	while(x<5) {
		cout << ++x << endl;
	}
	cout << "x++" << endl;
	x=0;
	while(x<5) {
		cout << x++ << endl;
	}

}

void funkcjaB() {
	int x = 10;
	cout << "do while(x<5), cout ++x" << endl;
	do {
	cout << ++x << endl;
	}
	while(x<5);

	x = 10;

	cout << "do while(x<5), cout x++" << endl;
	do {
	cout << x++ << endl;
        }
        while(x<5);
}

void funkcjaC() {
	cout << "if(i<0) break" << endl;
	for (int i=5; i>-10; i--) {
		if(i<0) break;
		cout << i << endl;
	}
	cout << "break" << endl;

	cout << "if(i&1) continue" << endl;
	for (int i=0; i<=10;i++){
		if(i&1) continue;
		cout << i << endl;
	}

	cout << "if(i==13) return" << endl;
	for (int i=10; i<30; i++) {
		cout << i << endl;
		if (i==13) return;
	}
}

int main()
{
	funkcjaA();
  funkcjaB();
  funkcjaC();
	return 0;

}
