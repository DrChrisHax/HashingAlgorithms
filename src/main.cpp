#include <iostream>
#include <cstring>
#include <string>
#include "util.hpp"
#include "sha256.h"

using std::cout;
using std::endl;



int main(int argc, char** argv) {

    string temp = "";
    std::cin >> temp;
    temp = hexToBin(temp);
    cout << temp << endl;
    cout << binToHex(temp) << endl;
}
