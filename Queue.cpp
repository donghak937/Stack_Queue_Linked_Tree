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
    if (isFull()){
        cout << "Queue is full!" << endl;
        return;
    }
    p[rear] = a;
    rear = (rear+1) % size;
    return;
}
int Queue::pop(){
    int tmp;
    if (isEmpty()){
        cout << "Queue is Empty!" << endl;
        return 0;
    }

    tmp = p[front];
    front = (front+1) % size;
    return tmp;
}
bool Queue::isFull(){
    return (rear + 1) % size == front ? true : false;
}
bool Queue::isEmpty(){
    return rear == front ? true : false;
}
void Queue::printAll(){
    if (isEmpty()){
        cout << "Queue is Empty!" << endl;
        return;
    }
    int i = front;
    while (i != rear){
        cout << i+1 << " : " << p[i] << endl;
        i = (i + 1) % size;
    }
}
void Queue::reverseQueue(){
    if (isEmpty()){
        cout << "Queue is Empty!" << endl;
        return;
    }

    int i = front;
    int* b = new int[(rear + 1) % size];
    int tmp = rear;
    while (i != tmp){
        b[i] = pop();
        i = (i + 1) % size;
    }
    while (i != tmp){
        p[i] = b[i];
        i = (i + 1) % size;
    }
    delete b;
}
int Queue::highestNum(){
    if (isEmpty()){
        cout << "Queue is Empty!" << endl;
        return 0;
    }

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
        cout << i+1 << " : " << p[i] << endl;
        i = (i + 1) % size;
        count++;
    }
    return count;
}