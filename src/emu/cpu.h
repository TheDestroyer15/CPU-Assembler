#pragma once
#include "../util/util.h"
#include "mem.h"

class CPU{

    public:
        bool Halt = false; // 
        Byte PC; // Program Counter

        Byte A; // Accumulator
        Byte B; // B 
        Byte F; // Flags

        Byte MA;

        Byte Output = 0x00; // Standard Output
        
    public:

        void Load(Byte *val, Byte load);


        void Reset();
        void Execute(Memory*);

        

};  