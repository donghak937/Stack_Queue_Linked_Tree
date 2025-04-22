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
        rear = p = front;
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

}
node LinkedQueue :: peek(){

}
void LinkedQueue :: clear(){

}
bool LinkedQueue :: isEmpty(){

}
int LinkedQueue :: countNum(){
    
}
