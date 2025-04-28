#include <iostream>
#include "LinkedStack.h"

using namespace std;

LinkedStack::LinkedStack(){
    top = NULL;
}

void LinkedStack::push(node a){
    node* p = new node;
    (*p) = a;
    p->link = top;
    top = p;
}

node LinkedStack::pop(){
    if (top == NULL){
        cout << "Listed Stack is Empty" << endl;
        return node();
    }
    node* tmp;
    node a;
    tmp = top;
    a = *tmp;
    top = top->link;
    cout << a.num << " is Deleted" << endl;
    delete tmp;
    return a;
    
}

int LinkedStack::countNum(){
    int count = 0;
    node* p = new node;
    for(p = top; p != NULL; p = p->link){
        count++;
    }
    delete p;
    return count;
    
}

void LinkedStack::printAll(){
    node* p;
    if (top == NULL){
        cout << "list is Empty" << endl;
        return;
    }
    for(p = top; p != NULL; p = p->link){
        if (p == top) cout << "| " << p->num << " |" << endl;
        else cout << "| " << p->num << " | -> ";
    }
}

void LinkedStack::reverseStack(){
    node* p;
    node b;
    LinkedStack a;
    for(p = top; p != NULL; p = p->link){
        b = pop();
        a.push(b);
    }
    this->top = a.top;
    a.top = NULL;
}