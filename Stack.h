#include <iostream>

using namespace std;

class Stack
{
private:
    int top;
    int size;
    int* p;

public:
    Stack(int s);
    void push(int a);
    int pop();
    bool isFull();
    bool isEmpty();
    void printAll();
    void reverseStack();
    int topNum();
    int countNum();
};