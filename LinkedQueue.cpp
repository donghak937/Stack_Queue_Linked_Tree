#include <iostream>
#include "LinkedQueue.h"

using namespace std;

LinkedQueue :: LinkedQueue(){
    front = NULL;
    rear = NULL;
}
void LinkedQueue :: insert_num(node a){
    node* p = new node;
    *p = a;
    p->link = NULL;
    if (isEmpty()){
        rear = front = p;
        return;
    }
    rear->link = p;
    rear = p;
    return;

}
node LinkedQueue :: delete_num(){
    if(isEmpty()){
        return node();
    }
    node temp = *front;
    node* del = front;

    front = front->link;
    delete del;
    return temp;
}
void LinkedQueue :: printAll(){
    node* p;
    for (p = front; p != NULL; p = p->link) {
        cout << "| " << p->num << " |";
        if (p->link != NULL) cout << " -> ";
    }
    cout << endl;
}
node LinkedQueue :: peek(){
    if (front == NULL) return node();
    return *front;
}
void LinkedQueue :: clear(){
    while (!(isEmpty())){
        delete_num();
    }
}
bool LinkedQueue :: isEmpty(){
    return front == NULL;
}
int LinkedQueue :: countNum(){
    node* p;
    int count = 0;
    for (p = front; p != NULL; p = p->link) {
        count++;
    }
    return count;
}
