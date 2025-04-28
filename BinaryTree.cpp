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
    int result;
    result = node_insert_left(root, tname, t);
    if (result == 1) node_count++;
    return result;
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
    else return node_insert_left(p->right, tname, t);
    
}

int BinaryTree ::insert_right(string tname, treeNode t) {
    int result;
    result = node_insert_right(root,tname,t);
    if (result == 1) node_count++;
    return result;

}

int node_insert_right(treeNode* p, string tname, treeNode t){
    int result;
    if (p == NULL) return 0;
    if(p->name == tname){
        if (p->right != NULL) return -1;
        treeNode* n = new treeNode;
        *n = t;
        n->left = NULL;
        n->right = NULL;
        p->right = n;
        return 1;
    }
    result = node_insert_right(p->left,tname,t);
    if (result != 0) return result;
    return node_insert_right(p->right,tname,t);
}

int BinaryTree ::score_sum(){
    return sum_nodes(root);
}

int sum_nodes(treeNode* p){
    if(p == NULL) return 0;
    return sum_nodes(p->right) + sum_nodes(p->left) + p->num;
}
double BinaryTree ::score_avg(){
    return score_sum() / (double) node_count;
}
void BinaryTree ::print_data_inorder(){
    printInorder(root);
}
void printInorder(treeNode* p){
    if (p==NULL) return;
    printInorder(p->left);
    cout << p->num << " - ";
    printInorder(p->right);
}
void printPreorder(treeNode* p){
    if (p==NULL) return;
    cout << p->num << " - ";
    printPreorder(p->left);
    printPreorder(p->right);
}
void printPostorder(treeNode* p){
    if (p==NULL) return;
    printPostorder(p->left);
    printPostorder(p->right);
    cout << p->num << " - ";
}
void BinaryTree ::print_data_preorder(){
    printPreorder(root);
}
void BinaryTree ::print_data_postorder(){
    printPostorder(root);
}