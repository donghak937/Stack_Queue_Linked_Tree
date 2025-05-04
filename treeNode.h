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

//트리 여기에 더 많은 것들을 구현할 예정임
//오늘 하루만 더 날먹으로 가보자구
