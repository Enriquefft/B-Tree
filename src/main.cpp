#include "BPlusTree.hpp"
#include <iostream>

class FloatCompare {
public:
  bool operator()(const float &a, const float &b) const { return a < b; }
};

int main() {

  BPlusTree<4, int> tree1; // M = 4, Key = int, T = int, Indexer = Identity
  BPlusTree<3, float, FloatCompare>
      tree2; // M = 3, Key = float, T = float, Compare = FloatCompare, Indexer =
             // Identity

  std::cout << "Hello, World!\n";
  return 0;
}