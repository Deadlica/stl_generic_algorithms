#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class person {
public:
    person(std::string name, double age);
    friend bool operator==(const person& lhs, const person& rhs);
    friend std::ostream& operator<<(std::ostream& out, person p);
private:
    std::string name;
    double age;
};

#endif