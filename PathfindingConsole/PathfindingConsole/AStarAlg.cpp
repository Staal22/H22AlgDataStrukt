#include "AStarAlg.h"
#include <algorithm>
#include "NodeSpawner.h"

void AStarAlg::shortestPath(NodeSpawner* spawner)
{
    for (int i = 0; i < NodeSpawner::row; ++i)
    {
        for (int j = 0; j < NodeSpawner::col; ++j)
        {
            unvisitedNodes.push_back(spawner->Nodes[i][j]);
        }
    }
    std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
    // unvisitedNodes[0]->distanceFromStart += unvisitedNodes[0]->heuristicCost;
    visitNode(unvisitedNodes[0]);
}

void AStarAlg::visitNode(NodeAsterisk* Node)
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
                connection->totalCost = connection->distanceFromStart + connection->heuristicCost;
                connection->prevInPath = Node;
            }
        }
        std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
        unvisitedNodes.erase(unvisitedNodes.begin());
        std::sort(unvisitedNodes.begin(), unvisitedNodes.end(), compareN);
        visitNode(unvisitedNodes[0]);
    }
}

void AStarAlg::reverseExplore(NodeAsterisk* Node)
{
    if(Node->prevInPath != nullptr && !Node->prevInPath->isStart)
    {
        Node->prevInPath->shortestPath = true;
        reverseExplore(Node->prevInPath);
    }
}
