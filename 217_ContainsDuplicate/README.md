# Contains Duplicate

## Problem Type

Data structures

## Solution description

The trick is to know that you must use a hash table to keep track of what you've seen, since lookup is O(1). You can use a `std::map` to complete this, but we don't exactly need to store a value with they key. To further optimize on space, we can use `std::set` which will just store keys without a value. For more info see [cppreference.com](https://en.cppreference.com/w/cpp/container).