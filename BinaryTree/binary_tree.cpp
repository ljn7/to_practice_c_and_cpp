#include <iostream>
#include "binary_tree.h"

BinaryTree::BinaryTree (int data) {
  _root = new TreeNode;
  _root -> data = data;
  _root -> left = _root -> right = nullptr;
}

int BinaryTree::Insert_node_recursion (int data, TreeNode* obj)  {
  if (obj->left == nullptr) {
    TreeNode* newNode = new TreeNode;
    newNode -> data = data;
    newNode->left = newNode->right = nullptr;
    obj -> left = newNode;
    return Height_of_node(_root);
  }
  else if (obj->right == nullptr) {
    TreeNode* newNode = new TreeNode;
    newNode -> data = data;
    newNode->left = newNode->right = nullptr;
    obj -> right = newNode;
    return Height_of_node(_root);
  }
  
}

int BinaryTree::Insert_node(int data) {
  TreeNode* temp;
  Queue<TreeNode> que;

  que.enQueue(_root);
  while(!que.isEmpty()) {
    temp = que.front->data;
    que.deQueue();

    if(temp->left == nullptr) {
      temp->left = new TreeNode;
      temp->left->data = data;
      temp->left->left = temp->left->right = nullptr;
      break;
    }

    else
      que.enQueue(temp->left);
    
    if(temp->right == nullptr) {
      temp->right = new TreeNode;
      temp->right->data = data;
      temp->right->left = temp->right->right = nullptr;
      break;
    }

    else
      que.enQueue(temp->right);
  }
  return Height_of_node(_root);
}

void BinaryTree::Traversal(TreeNode* obj) {
  if(obj == nullptr)
      return;
  Traversal(obj->left);
  std::cout << obj->data << " ";
  Traversal(obj->right);
}

int BinaryTree::Delete_node (TreeNode* obj, int key, TreeNode* prev = nullptr) {
  
}

int BinaryTree::Number_of_node (TreeNode* obj) {
  if(obj == nullptr)
    return 0;
  return Number_of_node(obj->left) + Number_of_node(obj->right) + 1;
}

int BinaryTree::Sum_of_node (TreeNode* obj) {
  if(obj == nullptr)
    return 0;
  return obj->data + Sum_of_node(obj->left) + Sum_of_node(obj->right); 
}

int BinaryTree::Height_of_node (TreeNode* obj) {
  if (obj == nullptr)
    return 0;
  int lNode = Height_of_node(obj->left) + 1;
  int rNode = Height_of_node(obj->right) + 1;

  return (lNode > rNode) ? lNode : rNode;
}

TreeNode* BinaryTree::Find_node (TreeNode* obj, int data) {
  if (obj == nullptr)
    return nullptr;
  if (obj->data == data)
    return obj;
  Find_node(obj->left, data);
  Find_node(obj->right, data);
}

BinaryTree::~BinaryTree () {
  if(this->_root != nullptr) 
    FreeMem (_root);
}

void BinaryTree::FreeMem(TreeNode* obj) {
  if (obj == nullptr)
    return;
  FreeMem (obj->left);
  FreeMem (obj->right);
  delete obj;
}

