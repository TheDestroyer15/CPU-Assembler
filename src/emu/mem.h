#pragma once
#include "../util/util.h"

class Memory{
    private:
        Byte* Mem = (Byte*)calloc(sizeof(Byte), sizeof(Byte));
    public:
        void Reset();
        Byte Read(Byte);
        void Write(Byte, Byte);
    
};
