#include <iostream>
#include "person.h"
#include "myprint.h"
#include <vector>

void addPeople(std::vector<person>& people);

int main() {
    person peopleArr[] = {{"Samuel Greenberg", 21.8},
                          {"Can Kupeli", 23.1},
                          {"Hossen Mansour", 22.4},
                          {"Marcus Jakobsson", 20.1},
                          {"Karl Backan", 20.5},
                          {"Angelica Engström", 22.7}};
                          
    std::vector<person> people(peopleArr, peopleArr + 6);

    MyPrint printer;
    printer(people);

    return 0;
}

void addPeople(std::vector<person>& people) {
    people.push_back(person("Samuel", 21.8));
    people.push_back(person("Can", 23.1));
    people.push_back(person("Hossen", 22.4));
    people.push_back(person("Marcus", 20.0));
    people.push_back(person("Karl", 20.5));
    people.push_back(person("Angelica", 22.7));
}