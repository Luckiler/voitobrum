#ifndef CEREBRUM_H
#define CEREBRUM_H

#include <map>

#include "picosha2.h"
#include "atom.h"


class cerebrum
{
    public:
        cerebrum();
        ~cerebrum();
        Atom* getAtom(std::string hash);
        std::vector<Atom*> getAtomsRelatedTo(std::vector<std::string> relatedLinks);

    protected:
        std::map<std::string, Atom*> atoms;
        // Links are like tags but renamed for symbolism
        std::map<std::string, std::vector<Atom*>> links;

    private:
};

#endif // CEREBRUM_H
