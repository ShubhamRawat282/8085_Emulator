#include "../HeaderFiles/header.h"

int opcode(string code){
    if(code == "ADD") return 1;
    if(code == "SUB") return 1;
    if(code == "MOV") return 1;
    if(code == "LDA") return 3;
    if(code == "STA") return 3;
    if(code == "HLDA") return 1;
    if(code == "LHLD") return 1;
    if(code == "SHLD") return 1;
    if(code == "JC") return 3;
    if(code == "JNC") return 3;
    if(code == "HLT") return 1;
    if(code == "JZ") return 3;
    if(code == "INR") return 1;
    if(code == "XCHG") return 1;
    if(code == "LXI") return 3;
    if(code == "MVI") return 2;
    if(code == "ADI") return 2;
    if(code == "HLT") return 1;
}