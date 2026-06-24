#pragma once
#include "../util/util.h"
#include "mem.h"

class CPU{

    public:
        bool Halt = false;
        Byte PC;

        Byte A;
        Byte B;
        Byte F;

        Byte Output = 0x00;
        
    public:

        void Load(Byte *val, Byte load);


        void Reset();
        void Execute(Memory*);

        

};  