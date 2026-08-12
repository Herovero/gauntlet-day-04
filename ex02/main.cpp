#include <iostream>
#include <set>

int main() {
    std::set<int> spawns = {7, 2, 7, 42, 13, 2, 42};

    std::cout << "-- spawned (unique, sorted) --\n";
    for (int id : spawns) {
        std::cout << id << "\n";
    }

    std::cout << "count: " << spawns.size() << "\n";

    std::cout << "is 42 spawned? " << (spawns.count(42) ? "yes" : "no") << "\n";
    std::cout << "is 99 spawned? " << (spawns.count(99) ? "yes" : "no") << "\n";

    return 0;
}