#include <iostream>

using namespace std;

class Queue
{
private:
    int size;
    int rear;
    int front;
    int* p;

public:
    Queue(int s);
    void push(int a);
    int pop();
    bool isFull();
    bool isEmpty();
    void printAll();
    void reverseQueue();
    int highestNum();
    int countNum();
};