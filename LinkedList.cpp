#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
}

void LinkedList::addToHead(node t){
    node* p = new node;
    (*p) = t;
    p->link = head;
    head = p;
    if (tail == NULL) tail = p;

}
void LinkedList::addToTail(node t){
    node* p = new node;
    (*p) = t;
    p->link = NULL;
    if(tail != NULL) tail->link = p; //tail을 링크로 가지고 있던 노드는 p를 주소로 가진다.
    else head = p;
    tail = p; //p를 주소로 가졌으니, tail은 p로 만들어준당!
}
void LinkedList::insertAt(int index, node t){
    int count = 1;
    node* p;
    for(p = head; p->link != NULL; p = p->link){
        if (count == index) break;
        count++;
        if (p->link == NULL){
            cout << "there is no index " << index << endl;
            return;
        }
    }

    node* temp = new node;
    *temp = t;
    temp->link = p->link;
    p->link = temp;

}
node LinkedList::deleteHead(){
    node* tmp;
    node a;
    tmp = head;
    a = *tmp;
    head = head->link;
    if (head== NULL) tail = NULL;

    delete tmp;
    return a;
    
}
node LinkedList::deleteTail(){
    node* p;
    node a;

    if (head == tail) return deleteHead();
    for(p = head; p->link->link != NULL; p = p->link){
        continue;
    }
    node* tmp = tail;
    a = *tail;
    p->link = NULL;
    tail = p;

    delete tmp;
    return a;
}

node LinkedList::deleteAt(int index){
    int count = 1;
    node* p;

    if (index == 1){
        return deleteHead();
    }

    for(p = head; p->link != NULL; p = p->link){
        if (count+1 == index) break;
        count++;
        if (p->link == NULL){
            cout << "there is no index " << index << endl;
            return node();
        }
    }
    node* temp = p->link;
    p->link = p->link->link;
    delete temp;

}
node LinkedList::searchNode(int a){
    int count = 0;
    node* p;

    for(p = head; p->link != NULL; p = p->link){
        if (count+1 == a) break;
        count++;
        if (p->link == NULL){
            cout << "there is no index " << a << endl;
            return node();
        }
    }

    return *p;
}

int LinkedList::countNode(){
    int count = 0;
    node* p = new node;
    for(p = head; p->link = NULL; p = p->link){
        count++;
    }
    delete p;
    return count;
    
}

void LinkedList::printAll(){
    node* p;
    for(p = head; p->link != NULL; p = p->link){
        cout << "| " << p->num << " | -> ";
        if (p == tail) cout << "| " << p->num << " |";
    }
}