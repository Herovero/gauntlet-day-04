#include <iostream>
#include <map>
#include <string>
#include "Entity.hpp"

int main() {
    std::map<int, Entity> entities = {
        {7, {7, "orc", 30}},
        {2, {2, "bat", 8}},
        {42, {42, "boss", 300}},
        {13, {13, "rat", 4}}
    };

    auto it42 = entities.find(42);
    std::cout << "id 42: ";
    if (it42 != entities.end()) {
        std::cout << it42->second.name << "\n";
    } else {
        std::cout << "(not found)\n";
    }

    auto it99 = entities.find(99);
    std::cout << "id 99: ";
    if (it99 != entities.end()) {
        std::cout << it99->second.name << "\n";
    } else {
        std::cout << "(not found)\n";
    }

    std::cout << "-- entities by id --\n";
    for (const auto& pair : entities) {
        std::cout << pair.first << " " << pair.second.name << "\n";
    }

    return 0;
}