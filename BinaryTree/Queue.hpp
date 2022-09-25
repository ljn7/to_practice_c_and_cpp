#pragma once

#include "Queue.h"

template <typename T>
QNode<T>::QNode(T* d) {
  data = d;
  prev = nullptr;
}

template <typename T>
Queue<T>::Queue() {
    front = rear = nullptr;
}

template <typename T>
void Queue<T>::enQueue(T* x) {

  QNode<T>* temp = new QNode<T>(x);

  if (rear == nullptr) {
      front = rear = temp;
      return;
  }

  rear->prev = temp;
  rear = temp;
}

template <typename T>
void Queue<T>::deQueue() {

  if (front == nullptr)
      return;

  QNode<T>* temp = front;
  front = front->prev;

  if (front == nullptr)
      rear = nullptr;

  delete (temp);
}

template <typename T>
bool Queue<T>::isEmpty () {

  if (front == nullptr)
    return true;

  return false;
}
