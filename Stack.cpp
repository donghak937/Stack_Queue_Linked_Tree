#include "Stack.h"

Stack::Stack(int s){
    size = s;
    p = new int[s];
    top = 0;
}
void Stack::push(int a){
    if (isFull()){
        cout << "Stack is full!" << endl;
        return;
    } 
    p[top] = a;
    top++;
}

int Stack::pop(){
    if (isEmpty()){
        cout << "Stack is Empty!" << endl;
        return -1;
    }

    top--;
    return p[top];
}

bool Stack::isFull(){
    return top == size ? true : false;
}
bool Stack::isEmpty(){
    return top == 0 ? true : false;
}
void Stack::printAll(){
    for(int i = 0; i < top; i++){
        cout << i+1 << " : " << p[i] << endl;
    }
}
void Stack::reverseStack(){
    int* d = new int[size];
    int tmp = top;

    for(int i = 0; i < tmp; i++){
        d[i] = pop();
    }

    for(int i = 0; i < tmp; i++){
        push(d[i]);
    }
    delete d;
}
int Stack::topNum(){
    if(isEmpty()){
        cout << "Stack is Empty!" << endl;
        return -1;
    }
    return p[top - 1];

}
int Stack::countNum(){
    return top - 1;
}


