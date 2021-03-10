#include <iostream>
#include <cstring>
 
int main()
{
  char strtext[] = "2021-rok";                
  char digit[] = "1234567890";               
 
  int num = strspn(strtext, digit);          
  std::cout << "Liczba znalezionych cyfr: "
            << num  <<"n";
  return 0;
}