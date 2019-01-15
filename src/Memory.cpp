
#include "Memory.h"

Memory::Memory() {
    this->type = UNDEFINED;
}

Memory::~Memory() {
    //dtor
}


MemoryType Memory::getType() {
    return this->type;
}
