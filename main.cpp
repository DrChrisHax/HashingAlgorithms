//Chris Manlove 11/9/2022
#include "sha256.h"
#include <iostream>
#include <string>


using namespace std;

int main() {


	//Testing 
	char data[] = "Hello World!";
	cout << "Actual:   " << sha256(data) << endl;
	cout << "Expected: 7f83b1657ff1fc53b92dc18148a1d65dfc2d4b1fa3d677284addd200126d9069" << endl;

	char input[2048];
	cout << "Enter a string: ";
	cin.getline(input, 2048);
	cout << "SHA256: " << sha256(input); 
	

	return 0;
}