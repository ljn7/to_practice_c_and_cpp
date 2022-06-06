#include "Queue.h"

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