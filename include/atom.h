#ifndef ATOM_H
#define ATOM_H

#include <cstddef>
#include <vector>
#include <string>
#include "atom_type.h"

class Atom
{
    public:
        Atom();
        ~Atom();
        AtomType getType();

    protected:
        AtomType type;
        std::vector<std::string>

    private:
};

#endif // ATOM_H
