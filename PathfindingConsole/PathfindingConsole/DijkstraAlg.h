#pragma once
#include <queue>
#include "NodeAsterisk.h"

class DijkstraAlg
{
public:
    static bool compareN(const NodeAsterisk* A, const NodeAsterisk* B)
    {
        return A->distanceFromStart < B->distanceFromStart;
    }
    std::vector<NodeAsterisk*> unvisitedNodes;
    
    void shortestPath(class NodeSpawner* spawner);
    void visitNode(NodeAsterisk* Node);
    void reverseExplore(NodeAsterisk* Node);
};
