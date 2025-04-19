#include <iostream>

using namespace std;

class node
{
public:
    int num;
    node* link;
    void setData(int a);
};


class LinkedList
{
private:
    node* head;
    node* tail;

public:
    LinkedList();
    void addToHead(node t);
    void addToTail(node t);
    void insertAt(int index, node t);
    node deleteHead();
    node deleteTail();
    node deleteAt(int index);
    node searchNode(int a);
    int countNode();
    void printAll();
};