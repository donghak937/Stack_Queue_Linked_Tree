#include <iostream>
#pragma once

using namespace std;

class treeNode
{
public:
    string name;
    int num;
    treeNode* left;
    treeNode* right;
    treeNode();
    void setData(string str, int a);
};
