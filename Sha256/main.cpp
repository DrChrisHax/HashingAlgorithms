#include <iostream>
#include <cstring>
#include <string>
#include "sha256.h"


int main(int argc, char** argv) {

    std::string s = "Hello world";
    char* data = new char[s.length() + 1];
    strcpy(data, s.c_str());
    
    std::cout << sha256(data) << std::endl;

    return 0;
}