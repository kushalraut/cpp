//Program 7: Create an object of a class and access class attributes 
#include <iostream>
#include <conio.h>
using namespace std;
class Oneplus {
public:
	int ram;   
	int storage; 
};
int main() 
{
    Oneplus Pro;       

	Pro.ram = 8;
	Pro.storage = 256;

	cout << "RAM on the OnePlus 7 Pro: " <<Pro.ram << endl;

	cout << "Storage on the OnePlus 7 Pro: " <<Pro.storage << endl;


	return 0;
}