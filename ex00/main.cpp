#include <iostream>
#include <vector>
#include "Entity.hpp"

int main() {
    std::vector<Entity> roster = {
        {7, "orc", 30},
        {2, "bat", 8},
        {42, "boss", 300},
        {13, "rat", 4}
    };

    std::cout << "-- roster --\n";
    for (const auto& entity : roster) {
        std::cout << entity.id << " " << entity.name << " (hp " << entity.hp << ")\n";
    }

    for (auto it = roster.begin(); it != roster.end(); ) {
        if (it->hp <= 5) {
            it = roster.erase(it); 
        } else {
            ++it;
        }
    }

    std::cout << "-- survivors --\n";
    for (const auto& entity : roster) {
        std::cout << entity.id << " " << entity.name << " (hp " << entity.hp << ")\n";
    }

    return 0;
}