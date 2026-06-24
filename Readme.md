8-Bit TTL CPU built entirely on breadboards out of Transistors


Registers:

    All Registers mentioned are 8 Bit unless otherwise specified
    Program Counter - 8 Bit
    Accumulator - General Purpose and used with ALU
    B - General Purpose
    Flags - Output flags of the ALU; 3 Bit containing Carry, Negative, and Zero
    Instruction/Memory Address - Registers used by the control unit that are used
    for loading and reading instructions


ALU Features:

    8 Bit Addition and Subtraction
    Comparing
    (Possible bitwise logic opperations such as AND + OR)

Memory:

    The RAM Module consists of an EEPROM that 
    can be both written to and read from. This computer
    can only read up to 256 bytes of RAM.

Output:

    A section of the computer contains wires that can 
    only be written to. It is possible to swap out what is
    being outputted to. The general output machine is a standard 
    16x2 LCD Display Module.




Instructions:

    Each instruction consists of an Opcode and a possible opperand.
    Slight variations of instructions allow for immedeate, absolute, etc.


Programming:

    It is possible to program the CPU in two ways. The primary way is through 
    DIP switches on the physical computer itself. This works by having a set of switches
    for both the address and data that writes to the RAM module directly. The other 
    possible way is through writting programs on a normal PC through the compiler found
    in this repository. The compiler will output a binary file that can either be read through
    the emulator also found in this repository or fed to an arduino that sends the data to the 
    physical computer's RAM.
