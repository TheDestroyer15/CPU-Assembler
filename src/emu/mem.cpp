#include "mem.h"

void Memory::Reset(){
    this->Mem = 0;
    for (int i = 0; i<sizeof(Byte); i++) {
        *Mem = 0b00000000;
        Mem++;
    }
}

Byte Memory::Read(Byte add){
    return this->Mem[add];
}


void Memory::Write(Byte add, Byte val){
    this->Mem[add] = val;
}

