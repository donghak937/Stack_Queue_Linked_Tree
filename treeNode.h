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
//ㅋㅋ 오늘도 날먹으로 가야할 듯 코딩하고 싶은데 자바 일단 다 써야함