#include <iostream>

using namespace std;

int main()
{
int n;
int m;
int i;
int a;
int b;

cout << "Enter a number that begins interval: ";
cin >> n;
cout << "Enter a number that ends interval: ";
cin >> m;
a=0;
b=0;


for (i=n; i<=m; i++) {
    if (i%2 == 0){
        a++;
    }else {
        b++;
    }
}

cout << " unequal numbers: " << a << endl;
cout << "  equal  numbers: " << b << endl;
}
