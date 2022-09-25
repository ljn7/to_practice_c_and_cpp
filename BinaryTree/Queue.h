#pragma once

#include "qnode.h"

template <typename T>
class Queue {
  public:
    QNode<T> *front, *rear;
    Queue ();
    //QNode<T> T*;
    void enQueue (T*);
    void deQueue ();
    bool isEmpty ();
};

#include "queue.hpp"