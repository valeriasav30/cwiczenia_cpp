#include <iostream>
using namespace std;

void Func1()
{
  int a = 4, *p;

  p = &a;
  cout << "Wywolanie: " << "p++" << "\t" << p++ << endl;
  p = &a;
  cout << "Wywolanie: " << "++p" << "\t" << ++p << endl;
  p = &a;
  cout << "Wywolanie: " << "++*p" << "\t" << ++*p << endl;
  p = &a;
  cout << "Wywolanie: " << "++(*p)" << "\t" << ++(*p) << endl;
  p = &a;
  cout << "Wywolanie: " << "++*(p)" << "\t" << ++*(p) << endl;
  p = &a;
  cout << "Wywolanie: " << "*p++" << "\t" << *p++ << endl;
  p = &a;
  cout << "Wywolanie: " << "(*p)++" << "\t" << (*p)++ << endl;
  p = &a;
  cout << "Wywolanie: " << "*(p)++" << "\t" << *(p)++ << endl;
  p = &a;
  cout << "Wywolanie: " << "*++p" << "\t" << *++p << endl;
  p = &a;
  cout << "Wywolanie: " << "*(++p)" << "\t" << *(++p) << endl;

}

void Func2()
{
  int a[] = {1, 2, 3, 4}, *p;
  p = a;

  cout << "Wywolanie: " << "p++" << "\t" << p++ << endl;
  cout << "Wywolanie: " << "++p" << "\t" << ++p << endl;
  cout << "Wywolanie: " << "++*p" << "\t" << ++*p << endl;
  cout << "Wywolanie: " << "++(*p)" << "\t" << ++(*p) << endl;
  cout << "Wywolanie: " << "++*(p)" << "\t" << ++*(p) << endl;
  cout << "Wywolanie: " << "*p++" << "\t" << *p++ << endl;
  cout << "Wywolanie: " << "(*p)++" << "\t" << (*p)++ << endl;
  cout << "Wywolanie: " << "*(p)++" << "\t" << *(p)++ << endl;
  cout << "Wywolanie: " << "*++p" << "\t" << *++p << endl;
  cout << "Wywolanie: " << "*(++p)" << "\t" << *(++p) << endl;

}

void Func3()
{
  int a;
  int b;
  int c;

  a = b = c = 0;
  int *p = &a;

  p++;
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++p;
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
   ++*p;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++(*p);
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++*(p);
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *p++;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  (*p)++;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *(p)++;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *++p;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *(++p);
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}

int main()
{
  cout << "Func1:" << endl;
  Func1();
  cout << "Func2:" << endl;
  Func();
  cout << "Func3:" << endl;
  Func3();


  return 0;
}
