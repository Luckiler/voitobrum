#ifndef CEREBRUM_H
#define CEREBRUM_H

#include <map>

#include "picosha2.h"
#include "Memory.h"
#include "Tag.h"

typedef std::map<std::string, Memory *> memory_map;

class Cerebrum {
public:
    Cerebrum();

    Cerebrum(std::map<std::string, Memory *> memories);

    ~Cerebrum();

    Memory *getMemory(std::string hash);

protected:
    // All the memories
    memory_map memories;
    // All the registered tags
    std::vector<Tag> tags;

};

#endif // CEREBRUM_H
