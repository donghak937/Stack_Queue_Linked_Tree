#include <iostream>
#pragma once
#include "BinaryTree.h"
#include "treeNode.h"

using namespace std;

BinaryTree ::BinaryTree() {
    node_count = 0;
    root = NULL;
}
int BinaryTree ::insert_root(treeNode t){
    if (root == NULL) return 0;
    treeNode* p = new treeNode;
    *p = t;
    p->left = NULL;
    p->right = NULL;
    root = p;
    node_count++;
    return 1;
}
int BinaryTree ::insert_left(string tname, treeNode t){
    treeNode* p;
    p = root;
    if (p == NULL) return 0;
    node_insert_left(p->left, tname, t)
}
int node_insert_left(treeNode* p, string tname, treeNode t){
    int result = 0;
    if (p == NULL) return 0;
    if(p->name == tname){
        if (p->left != NULL) return -1;
        treeNode* n = new treeNode;
        *n = t;
        n->left = NULL;
        n->right = NULL;
        p->left = n;
        return 1;
    }
    else
    result = node_insert_left(p->left, tname, t);
    if (result != 0) return result;
    else return node_insert_left(p->right, tname, t)
    
}
int BinaryTree ::insert_right(string tname, treeNode t);

int BinaryTree ::score_sum();
double BinaryTree ::score_avg();
void BinaryTree ::print_data_inorder();
void BinaryTree ::print_data_preorder();
void BinaryTree ::print_data_postorder();