#pragma once
#include "NodeAsterisk.h"

class NodeSpawner
{
public:
    static constexpr int row = 10;
    static constexpr int col = 20;
    NodeAsterisk* Nodes[row][col]{};
    // std::vector<std::vector<NodeAsterisk*>> Nodes;

    void setStart(int i, int j);
    void setEnd(int i, int j);

    void generateNodes();
    void generateConnections();
    
    void drawNodes();
};
