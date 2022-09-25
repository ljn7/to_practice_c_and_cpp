#include <iostream>
#include "binary_tree.h"


int main () {
  //contructor (root node)
  BinaryTree Test(10);

  //Insertion
  std::cout << "\nHeight = " <<   Test.Insert_node(20);
  std::cout << "\nHeight = " <<   Test.Insert_node(30);
  std::cout << "\nHeight = " <<   Test.Insert_node(40);
  std::cout << "\nHeight = " <<   Test.Insert_node(50);
  std::cout << "\nHeight = " <<   Test.Insert_node(60);
  std::cout << "\nHeight = " <<   Test.Insert_node(70);
  
  //Summation of nodes
  std::cout << "\nSum = " << Test.Sum_of_node(Test._root) << " ";

  //Traversal of Tree
  std::cout << std::endl;
  Test.Traversal(Test._root);
  TreeNode* findingNode = Test.Find_node(Test._root, 70);
}