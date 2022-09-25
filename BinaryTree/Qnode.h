#pragma once

template <typename T>
struct QNode {
  T* data;
  QNode<T>* prev;
  QNode(T*);
};

