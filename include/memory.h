#ifndef MEMORY_H
#define MEMORY_H

#include <vector>
#include <string>
#include "memory_type.h"

class memory {
public:
    memory();

    ~memory();

    // Gets the type of this memory
    MemoryType getType();

protected:
    std::string hash;
    MemoryType type;
    std::vector<std::string> tags;
    std::vector<std::string> relatedMemories;

private:
};

#endif // MEMORY_H
