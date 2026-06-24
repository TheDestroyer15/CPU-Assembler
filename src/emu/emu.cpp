#include "../util/util.h"
#include "cpu.h"
#include "mem.h"

int main(int argc, char** argv){
    CPU* cpu = new CPU();
    Memory* memory = new Memory();
    cpu->Reset();
    
    while (!cpu->Halt){
        cpu->Execute(memory);
    }
    
}
