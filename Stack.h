#include <iostream>

using namespace std;

class Stack
{
private:
    int top;
    int size;
    int* p;

public:
    Stack(int SIZE);
    void push(int a);
    int pop();
    bool isFull();
    bool isEmpty();
    void printAll();
    void reverseStack();
};