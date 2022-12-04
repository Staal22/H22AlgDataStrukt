#pragma once
#include <iostream>
#include <vector>

template <class T>
class TreeNode
{
public:
    TreeNode* left{};
    TreeNode* right{};
    T data{};
    TreeNode();
    TreeNode(T inData);
    
    enum traversalOrder
    {
        PreOrder = 0,
        InOrder = 1,
        PostOrder = 2
    };
    
    bool insertNode(T inData);
    bool findVal(T toFind);
    bool deleteVal(T toDelete, TreeNode<T>* root);
    T min(TreeNode<T>* root);  // assumes sorted
    T max(TreeNode<T>* root);  // assumes sorted
    
    void displayTree(traversalOrder, TreeNode<T>* root);

};

#include "TreeNode.tpp"
