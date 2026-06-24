#include "cpu.h"



void Load(Byte *val, Byte load){
    *val = load;
}

void CPU::Reset(){
    this->PC = 0b00000000;
    this->A = this->B = this->F = this->Output = 0b00000000;
}


void CPU::Execute(Memory* mem){

}