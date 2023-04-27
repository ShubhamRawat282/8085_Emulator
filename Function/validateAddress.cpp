#include "../HeaderFiles/header.h"

bool validateAddress(string address){
    if(address.length()!=4)
        return false;
    for(int i=0;i<4;i++){
        if((address[i]>='0'&&address[i]<='9')||(address[i]>='A'&&address[i]<='F'))
            continue;
        else    return false;
    }
    return true;
}