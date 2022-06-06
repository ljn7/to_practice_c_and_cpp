//Node for Queue
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