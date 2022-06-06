#include <iostream>

//Queue Template
template <typename T>
struct QNode {
  T* data;
  QNode* prev;
  QNode(T*);
};

template <typename T>
class Queue {
  public:
    QNode<T> *front, *rear;
    Queue ();
    void enQueue (T*);
    void deQueue ();
    bool isEmpty ();
};

template <typename T>
QNode<T>::QNode(T* d) {
  data = d;
  prev = NULL;
}

template <typename T>
Queue<T>::Queue() {
    front = rear = NULL;
}

template <typename T>
void Queue<T>::enQueue(T* x) {

  QNode<T>* temp = new QNode<T>(x);

  if (rear == NULL) {
      front = rear = temp;
      return;
  }

  rear->prev = temp;
  rear = temp;
}

template <typename T>
void Queue<T>::deQueue() {

  if (front == NULL)
      return;

  QNode<T>* temp = front;
  front = front->prev;

  if (front == NULL)
      rear = NULL;

  delete (temp);
}

template <typename T>
bool Queue<T>::isEmpty () {

  if (front == NULL)
    return true;

  return false;
}
//End of Queue Template

//Node for Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
};

class BinaryTree {
  public:
    TreeNode* _root;
    BinaryTree (int);
    int Insert_node (int);
    int Delete_node (TreeNode*, int, TreeNode*);
    int Number_of_node (TreeNode*);
    int Sum_of_node (TreeNode*);
    void Traversal (TreeNode*);
    int Height_of_node (TreeNode*);
    TreeNode* Find_node (TreeNode*, int);
    void FreeMem(TreeNode*);
    ~BinaryTree ();
};

BinaryTree::BinaryTree (int data) {
  _root = new TreeNode;
  _root -> data = data;
  _root -> left = _root -> right = NULL;
}

int BinaryTree::Insert_node(int data) {
  TreeNode* temp;
  Queue<TreeNode> que;

  que.enQueue(_root);
  while(!que.isEmpty()) {
    temp = que.front->data;
    que.deQueue();

    if(temp->left == NULL) {
      temp->left = new TreeNode;
      temp->left->data = data;
      temp->left->left = temp->left->right = NULL;
      break;
    }

    else
      que.enQueue(temp->left);
    
    if(temp->right == NULL) {
      temp->right = new TreeNode;
      temp->right->data = data;
      temp->right->left = temp->right->right = NULL;
      break;
    }

    else
      que.enQueue(temp->right);
  }
  return Height_of_node(_root);
}

void BinaryTree::Traversal(TreeNode* obj) {
  if(obj == NULL)
      return;
  Traversal(obj->left);
  std::cout << obj->data << " ";
  Traversal(obj->right);
}

int BinaryTree::Delete_node (TreeNode* obj, int key, TreeNode* prev = NULL) {
  
}

int BinaryTree::Number_of_node (TreeNode* obj) {
  if(obj == NULL)
    return 0;
  return Number_of_node(obj->left) + Number_of_node(obj->right) + 1;
}

int BinaryTree::Sum_of_node (TreeNode* obj) {
  if(obj == NULL)
    return 0;
  return obj->data + Sum_of_node(obj->left) + Sum_of_node(obj->right); 
}

int BinaryTree::Height_of_node (TreeNode* obj) {
  if (obj == NULL)
    return 0;
  int lNode = Height_of_node(obj->left) + 1;
  int rNode = Height_of_node(obj->right) + 1;

  return (lNode > rNode) ? lNode : rNode;
}

TreeNode* BinaryTree::Find_node (TreeNode* obj, int data) {
  if (obj == NULL)
    return NULL;
  if (obj->data == data)
    return obj;
  Find_node(obj->left, data);
  Find_node(obj->right, data);
}

BinaryTree::~BinaryTree () {
  if(this->_root != NULL) 
    FreeMem (_root);
}

void BinaryTree::FreeMem(TreeNode* obj) {
  if (obj == NULL)
    return;
  FreeMem (obj->left);
  FreeMem (obj->right);
  delete obj;
}

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