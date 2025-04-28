#include <iostream>
#pragma once
#include "treeNode.h"

using namespace std;

class BinaryTree
{
public:
    int node_count;
    treeNode* root;

    BinaryTree();
    int insert_root(treeNode t);
    int insert_left(string tname, treeNode t);
    int insert_right(string tname, treeNode t);


    int score_sum();
    double score_avg();
    void print_data_inorder();
    void print_data_preorder();
    void print_data_postorder();
};