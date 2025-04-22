#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(int s){
    size = s;
    p = new int[s];
    rear = 0;
    front = 0;
}

void Queue::push(int a){

    if ( !isFull() ){
        p[rear] = a;
        rear = (rear+1) % size;
        return;
    }
    return;
    
}
int Queue::pop(){
    int tmp;

    if ( !isEmpty() ){
        tmp = p[front];
        front = (front+1) % size;
        return tmp;
    }

    return -1;
}
bool Queue::isFull(){
    return (rear + 1) % size == front ? true : false;
}
bool Queue::isEmpty(){
    return rear == front ? true : false;
}
void Queue::printAll(){

    int count = 1;
    int i = front;
    while (i != rear){
        cout << count << " : " << p[i] << endl;
        i = (i + 1) % size;
        count++;
    }
}
void Queue::reverseQueue(){

    int i = front;
    int counts = countNum();
    int* b = new int[counts];
    int tmp = rear;


    while (i != tmp){
        b[i] = pop();
        
        i = (i + 1) % size;
        
    }
    for(int k = counts; k > 0; k--){
        cout << b[k-1] << endl;
        push(b[k-1]);
    }
    delete b;
}
int Queue::highestNum(){

    int i = front;
    int max;
    while (i != rear){
        if (p[i] > max) max = p[i];
        i = (i + 1) % size;
    }
    return max;
}
int Queue::countNum(){
    int i = front;
    int count = 0;
    while (i != rear){
        i = (i + 1) % size;
        count++;
    }
    return count;
}