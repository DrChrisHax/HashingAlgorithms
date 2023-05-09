#include <bits/stdc++.h>
#include <bitset>
#include <string>
#include <sstream>

using std::to_string;
using std::stoi;
using std::string;
using std::bitset;

string hexToBin(const string& hex) {
    //Skip the 0x if it exists
    size_t i = (hex[1] == 'x' || hex[1] == 'X') ? 2 : 0;

    string bin = "";
    
    while(hex[i]) {
        switch(hex[i]) {
            case '0':
                bin += "0000";
                break;
            case '1':
                bin += "0001";
                break;
            case '2':
                bin += "0010";
                break;
            case '3':
                bin += "0011";
                break;
            case '4':
                bin += "0100";
                break;
            case '5':
                bin += "0101";
                break;
            case '6':
                bin += "0110";
                break;
            case '7':
                bin += "0111";
                break;
            case '8':
                bin += "1000";
                break;
            case '9':
                bin += "1001";
                break;
            case 'A':
            case 'a':
                bin += "1010";
                break;
            case 'B':
            case 'b':
                bin += "1011";
                break;
            case 'C':
            case 'c':
                bin += "1100";
                break;
            case 'D':
            case 'd':
                bin += "1101";
                break;
            case 'E':
            case 'e':
                bin += "1110";
                break;
            case 'F':
            case 'f':
                bin += "1111";
                break;
            case '.':
                bin += ".";
                break;
            default:
                return "";
        }
        i++;
    }
    return bin;
}

string binToHex(const string& bin) {
    const char numBitsPerLoop = 64;
    int binSize = bin.size();
    string binPad = "";
    if(binSize % 4 != 0) {
        int binPadding = 4 - (binSize % 4);
        binPad = string(binPadding, '0');
        binSize += binPadding;
    }

    int numHexDig = binSize / 4;
    bitset<256> binary(binPad + bin);
    unsigned long long dec = binary.to_ullong();

    char hexStr[65];
    sprintf(hexStr, "%llX", dec);

    int numTrimDigits = 0;
    for(int i = 0; i < numHexDig - 1; i++) {
        if(hexStr[i] == '0') {
            numTrimDigits++;
        }
        else break;
    }
    return string(hexStr + numTrimDigits, hexStr + numHexDig);
}