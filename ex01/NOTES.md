Container chosen: `std::map<int, Entity>`

Reasoning:
1. *Direct Lookup:*
`std::map` link a key to a value, letting us use the `id` to directly look up the entity.

2. *Safe Lookup:*
The `.find()` method checks if an ID exists without accidentally inserting a default-constructed element into the container, which `operator[]` would do.

3. *Automatic Ordering:*
`std::map` is a binary search tree that automatically sort elements by keys in ascending order without having to manually write a sort function.