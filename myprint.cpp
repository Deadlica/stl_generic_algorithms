#include "myprint.h"

void MyPrint::operator()(std::vector<person> people) {
    for(auto e: people) {
        std::cout << e << std::endl;
    }
    return;
}