#include<iostream>
using namespace std;
int hexadecimalToDecimal(string hexVal)
{
    int len = hexVal.size();
    int base = 1;
 
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            base = base * 16;
        }
    }
    return dec_val;
}

int main()
{
    string hexNum = "1A";
    cout << (hexadecimalToDecimal(hexNum));
    return 0;
}

