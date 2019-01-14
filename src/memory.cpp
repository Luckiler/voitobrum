
#include "memory.h"

memory::memory() {
    this->type = UNDEFINED;
}

memory::~memory() {
    //dtor
}


MemoryType memory::getType() {
    return this->type;
}
