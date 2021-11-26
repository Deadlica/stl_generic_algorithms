#ifndef MYPRINT_H
#define MYPRINT_H

#include "person.h"
#include <vector>

class MyPrint {
public:
    void operator()(std::vector<person> people);

private:


};

#endif