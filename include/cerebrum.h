#ifndef CEREBRUM_H
#define CEREBRUM_H

#include <map>

#include "picosha2.h"
#include "memory.h"


class cerebrum
{
    public:
        cerebrum();
        ~cerebrum();
        Memory* getAtom(std::string hash);
        std::vector<Memory*> getAtomsRelatedTo(std::vector<std::string> relatedLinks);

    protected:
        std::map<std::string, Memory*> atoms;
        // Links are like tags but renamed for symbolism
        std::map<std::string, std::vector<Memory*>> links;

    private:
};

#endif // CEREBRUM_H
