#include "../HeaderFiles/header.h"

bool validateData(string data){
    if(data.length()!=2)    return false;
    for(int i=0;i<data.length();i++){
        if((data[i]>='0'&&data[i]<='9')||(data[i]>='A'&&data[i]<='F'))  continue;
        else return false;
    }
    return true;
}