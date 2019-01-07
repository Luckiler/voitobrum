//
// Created by lucas on 30.12.18.
//

#ifndef VOITOBRUM_ATOMTEXT_H
#define VOITOBRUM_ATOMTEXT_H

#include <string>

#include "atom.h"

class AtomText : public Atom
{
public:
    AtomText();
    ~AtomText();

protected:
    // TODO optimise for huge chunks of text
    std::string text;
};


#endif //VOITOBRUM_ATOMTEXT_H
