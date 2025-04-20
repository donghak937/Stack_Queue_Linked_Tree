#include <iostream>
#pragma once
#include "node.h"

using namespace std;

class LinkedStack
{
private:
    node* top;

public:
    LinkedStack();
    void push(node a);
    node pop();
    void printAll();
    void reverseStack();
    int countNum();
};