include <iostream>
using namespace std;

int& referencja(int x)
{
    int value = x + 1;
    return value;
} 

int* ad(int x)
{
    int value = x + 1;
    return &value;
}
int value(int x)
{
    int value = x + 1;
    return value;
}
int* tab() {
    static int a[4] = { 1,2,3,4 };
    return a;
}
int main() {

    cout << referencja(1) << endl;
    cout << ad(1) << " " << *ad(1) << endl;
    cout << value(1) << endl;
    cout << tab() << endl;
    return 0;
}
