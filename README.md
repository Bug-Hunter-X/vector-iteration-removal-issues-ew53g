# Unexpected Behavior When Removing Elements from std::vector During Iteration

This repository demonstrates an uncommon error when iterating over and removing elements from a `std::vector` in C++.  The issue arises because modifying the vector's size during iteration invalidates iterators. 

The code in `bug.cpp` showcases the problem: attempting to remove all elements from a vector within a for loop leads to only some elements being removed. This is because erasing an element shifts subsequent elements, thus invalidating the iterator.

The corrected code in `bugSolution.cpp` provides a solution to this problem using reverse iteration or creating a new vector.

## How to Reproduce
1. Clone this repository.
2. Compile `bug.cpp` and observe the incorrect output.
3. Compile `bugSolution.cpp` and observe the correct output.

## Solutions
- Reverse Iteration: Iterate backward through the vector, so erasing elements doesn't invalidate iterators.
- Create a New Vector: Iterate through the original vector and add only the desired elements to a new vector.