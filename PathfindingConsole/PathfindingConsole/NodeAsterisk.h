#pragma once
#include <climits>
#include <vector>

class NodeAsterisk
{
public:
    char symbol = '*';
    
    int distanceFromStart = INT_MAX - 2000;
    int totalCost = INT_MAX - 2000;
    int heuristicCost = 0;
    
    bool bVisited = false;
    bool isEnd = false;
    bool isStart = false;
    bool shortestPath = false;

    NodeAsterisk* prevInPath = nullptr;
    std::vector<NodeAsterisk*> connections{};
};
