Container chosen: `std::map<int, Entity>`

Reasoning:
1. **Direct Lookup:** `std::map` stores elements as key-value pairs. By using the `id` as the key, we can look up an entity directly. 
2. **Safe Lookup:** It provides the `.find()` method, which allows us to search for keys (like 99) without accidentally inserting a default-constructed element into the container, which `operator[]` would do.
3. **Automatic Ordering:** `std::map` is typically implemented as a self-balancing binary search tree (like a Red-Black tree). It inherently sorts its elements by their keys in ascending order. When iterating through a `std::map`, it guarantees an in-order traversal, satisfying the requirement to print IDs sequentially without writing a manual sorting step.