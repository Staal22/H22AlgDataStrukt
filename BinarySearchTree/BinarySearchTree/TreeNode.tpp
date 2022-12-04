#pragma once

template <class T>
TreeNode<T>::TreeNode()
{
    data = -1;
}

template <class T>
TreeNode<T>::TreeNode(T inData)
{
    data = inData;
}

template <class T>
bool TreeNode<T>::insertNode(T inData)
{
    // node already exists
    if (data == inData)
        return false;
    
    if (inData < data) {
        if (left != nullptr) {
            left->insertNode(inData);
        }
        else
        {
            // we are at leaf
            left = new TreeNode<T>(inData);
            return true;
        }
    }
    else
    {
        if (right != nullptr) {
            right->insertNode(inData);
        }
        else
        {
            // we are at leaf
            right = new TreeNode<T>(inData);
            return true;
        }
    }
    return false;
}


template <class T>
bool TreeNode<T>::findVal(T toFind)
{
    if (toFind == data)
        return true;
    
    if (left != nullptr && toFind < data)
        return left->findVal(toFind);
    
    if (right != nullptr && toFind > data)
        return right->findVal(toFind);
    
    // node doesn't exist
    return false;
}

template <class T>
T TreeNode<T>::min(TreeNode<T>* root)
{
    if (root->left == nullptr)
        return root->data;

    
    min(root->left);
}

template <class T>
T TreeNode<T>::max(TreeNode<T>* root)
{
    if (root->right == nullptr)
        return root->data;

    max(root->right);
}

template <class T>
void TreeNode<T>::displayTree(traversalOrder order, TreeNode<T>* root)
{
    if (order == PreOrder)
    {
        if (root != nullptr)
        {
            std::cout << root->data << std::endl;
            displayTree(PreOrder, root->left);
            displayTree(PreOrder, root->right);
        }
    }
    else if (order == InOrder)
    {
        if (root != nullptr)
        {
            displayTree(InOrder, root->left);
            std::cout << root->data << std::endl;
            displayTree(InOrder, root->right);
        }

    }
    else if (order == PostOrder)
    {
        if (root != nullptr)
        {
            displayTree(PostOrder, root->left);
            displayTree(PostOrder, root->right);
            std::cout << root->data << std::endl;
        }

    }
}

template <class T>
bool TreeNode<T>::deleteVal(T toDelete, TreeNode<T>* root)
{
    if (root != nullptr)
    {
        if (toDelete == root->data)
        {
            root = nullptr;
            return true;
        }
        if (toDelete < root->data)
        {
            deleteVal(toDelete, root->left);
        }
        else
        {
            deleteVal(toDelete, root->right);
        }
    }
    // not found
    return false;
}
