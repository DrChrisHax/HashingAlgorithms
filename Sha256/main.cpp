#include <iostream>
#include <cstring>
#include <string>
#include "sha256.h"


int main(int argc, char** argv) {

    if(argc < 2) {
        std::cout << "Usage: \nUse \"\" to contain your string \nExample: ./main \"Hello World!\"\n" 
                    << "7f83b1657ff1fc53b92dc18148a1d65dfc2d4b1fa3d677284addd200126d9069\n";
        return 0;
    }
    std::cout << sha256(argv[1]) << std::endl;


    return 0;
}
