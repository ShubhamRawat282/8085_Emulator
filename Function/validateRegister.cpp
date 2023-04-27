#include "../HeaderFiles/header.h"

bool validateRegister(string regis){
    if(regis=="A"||regis=="B"||regis=="C"||regis=="D"||regis=="E"||regis=="H"||regis=="L")  return true;
    return false;
}