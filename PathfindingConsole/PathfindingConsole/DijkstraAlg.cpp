#include "DijkstraAlg.h"
#include "NodeSpawner.h"

void DijkstraAlg::shortestPath(NodeSpawner* spawner)
{
    for (int i = 0; i < NodeSpawner::row; ++i)
    {
        for (int j = 0; j < NodeSpawner::col; ++j)
        {
            unvisitedNodes.push_back(spawner->Nodes[i][j]);
        }
    }
    std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
    visitNode(unvisitedNodes[0]);
}

void DijkstraAlg::visitNode(NodeAsterisk* Node)
{
    if (!Node->bVisited)
    {
        Node->bVisited = true;
        if (Node->isEnd)
        {
            reverseExplore(Node);
            return;
        }
        for (auto connection : Node->connections)
        {
            if (Node->distanceFromStart + 3 < connection->distanceFromStart)
            {
                connection->distanceFromStart = Node->distanceFromStart + 3;
                connection->prevInPath = Node;
            }
        }
        std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
        unvisitedNodes.erase(unvisitedNodes.begin());
        std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
        visitNode(unvisitedNodes[0]);
    }
}

void DijkstraAlg::reverseExplore(NodeAsterisk* Node)
{
    if(Node->prevInPath != nullptr && !Node->prevInPath->isStart)
    {
        Node->prevInPath->shortestPath = true;
        reverseExplore(Node->prevInPath);
    }
}
