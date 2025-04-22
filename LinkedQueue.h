#include <iostream>
#pragma once
#include "node.h"

using namespace std;

class LinkedQueue
{
private:
    node* front;
    node* rear;

public:
    LinkedQueue();
    void insert_num(node a);
    node delete_num();
    void printAll();
    node peek();
    void clear();
    bool isEmpty();
    int countNum();
};