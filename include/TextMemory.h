//
// Created by lucas on 30.12.18.
//

#ifndef VOITOBRUM_ATOMTEXT_H
#define VOITOBRUM_ATOMTEXT_H

#include <string>

#include "Memory.h"

class TextMemory : public Memory {
public:
    TextMemory();

    ~TextMemory();

protected:
    // TODO optimise for huge chunks of text
    std::string text;
};


#endif //VOITOBRUM_ATOMTEXT_H
