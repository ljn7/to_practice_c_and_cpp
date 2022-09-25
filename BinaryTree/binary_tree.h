#pragma once
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
};

#include "Queue.h"

class BinaryTree {
  public:
    TreeNode* _root;
    BinaryTree (int);
    int Insert_node (int);
    int Insert_node_recursion (int, TreeNode*);
    int Delete_node (TreeNode*, int, TreeNode*);
    int Number_of_node (TreeNode*);
    int Sum_of_node (TreeNode*);
    void Traversal (TreeNode*);
    int Height_of_node (TreeNode*);
    TreeNode* Find_node (TreeNode*, int);
    void FreeMem(TreeNode*);
    ~BinaryTree ();
};