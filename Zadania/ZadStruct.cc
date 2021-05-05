#include <iostream>
#include <cstring>

struct Telefon {
	char* marka;
	float iloscRdzeni;
	int pojemnoscBaterii;
	int rokProdukcji;
};



int main() {
	Telefon telefon1;
	//strncpy(telefon.marka, "Iphone", 11);
	telefon1.marka = strndup("Iphone", 11);
  
	telefon1.pojemnoscBaterii = 3687;

	std::cout << "Telefon marka " << telefon1.marka << " o mocy " << telefon1.pojemnoscBaterii << " baterii" << std::endl;

	return 0;
}
