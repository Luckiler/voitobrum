#include "atom.h"

Atom::Atom()
{
    this->type = UNDEFINED;
}

Atom::~Atom()
{
    //dtor
}


AtomType Atom::getType()
{
    return this->type;
}
