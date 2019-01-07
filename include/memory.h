#ifndef MEMORY_H
#define MEMORY_H

#include <cstddef>
#include <vector>
#include <string>
#include "memory_type.h"

class Memory
{
    public:
        Memory();
        ~Memory();
        MemoryType getType();

    protected:
        std::string hash;
        MemoryType type;
        std::vector<std::string> tags;

    private:
};

#endif // MEMORY_H
