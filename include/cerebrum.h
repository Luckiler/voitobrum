#ifndef CEREBRUM_H
#define CEREBRUM_H

#include <map>

#include "picosha2.h"
#include "memory.h"
#include "tag.h"

typedef std::map<std::string, memory *> memory_map;

class cerebrum {
public:
    cerebrum();

    cerebrum(std::map<std::string, memory *> memories);

    ~cerebrum();

    memory *getMemory(std::string hash);

protected:
    // All the memories
    memory_map memories;
    // All the registered tags
    std::vector<tag> tags;

};

#endif // CEREBRUM_H
