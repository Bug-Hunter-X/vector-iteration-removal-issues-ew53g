#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  // Solution 1: Reverse Iteration
  for (int i = vec.size() - 1; i >= 0; --i) {
    vec.erase(vec.begin() + i);
  }

  std::cout << "Solution 1: ";
  for (int x : vec) std::cout << x << " ";
  std::cout << std::endl;

  // Solution 2: Create a New Vector (Alternative)
  vec = {1, 2, 3, 4, 5}; // Reset the vector
  std::vector<int> vec2;
  for (int x : vec) {
    // Add a condition here to filter elements if needed 
    // Example:  if (x % 2 != 0) vec2.push_back(x); 
  }

  std::cout << "Solution 2: ";
  for (int x : vec2) std::cout << x << " ";
  std::cout << std::endl;
  return 0;
}