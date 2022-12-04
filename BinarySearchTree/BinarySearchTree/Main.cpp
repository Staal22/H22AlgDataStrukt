#include <string>
#include "TreeNode.h"

int main()
{
    auto* nodeRoot = new TreeNode<int>(15);
    nodeRoot->insertNode(4);
    nodeRoot->insertNode(3);
    nodeRoot->insertNode(4);
    nodeRoot->insertNode(20);
    nodeRoot->insertNode(19);
    nodeRoot->insertNode(16);
    nodeRoot->insertNode(25);
    std::cout << "PreOrder traversal: " << std::endl;
    nodeRoot->displayTree(TreeNode<int>::PreOrder, nodeRoot);
    std::cout << "InOrder traversal: " << std::endl;
    nodeRoot->displayTree(TreeNode<int>::InOrder, nodeRoot);
    std::cout << "PostOrder traversal: " << std::endl;
    nodeRoot->displayTree(TreeNode<int>::PostOrder, nodeRoot);

    nodeRoot->deleteVal(25, nodeRoot);
    if (nodeRoot->findVal(20))
    {
        std::cout << "Node with value 20 exists." << std::endl;
    }

    std::cout << "Min value is: " + std::to_string(nodeRoot->min(nodeRoot)) << std::endl;
    std::cout << "Max value is: " + std::to_string(nodeRoot->max(nodeRoot)) << std::endl;
    std::cout << "PreOrder traversal: " << std::endl;
    nodeRoot->displayTree(TreeNode<int>::PreOrder, nodeRoot);
    

    
    return 0;
}
