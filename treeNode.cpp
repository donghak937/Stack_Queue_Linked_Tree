#include <iostream>
#pragma once
#include "treeNode.h"

using namespace std;

treeNode :: treeNode(){
    left = NULL;
    right = NULL;
}

void treeNode :: setData(string str, int a){
    name = str;
    num = a;
}