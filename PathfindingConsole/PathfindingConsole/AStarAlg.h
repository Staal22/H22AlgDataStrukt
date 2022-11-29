#pragma once
#include <vector>
#include "NodeAsterisk.h"

class AStarAlg
{
public:
    static bool compareN(const NodeAsterisk* A, const NodeAsterisk* B)
    {
        return A->totalCost < B->totalCost;
    }
    std::vector<NodeAsterisk*> unvisitedNodes;
    
    void shortestPath(class NodeSpawner* spawner);
    void visitNode(NodeAsterisk* Node);
    void reverseExplore(NodeAsterisk* Node);
};
