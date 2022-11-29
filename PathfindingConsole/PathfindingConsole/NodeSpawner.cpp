#include "NodeSpawner.h"
#include <iostream>
#include <windows.h>

void NodeSpawner::setStart(int i, int j)
{
    Nodes[i][j]->isStart = true;
    Nodes[i][j]->distanceFromStart = 0;
}

void NodeSpawner::setEnd(int i, int j)
{
    Nodes[i][j]->isEnd = true;
}

void NodeSpawner::generateNodes()
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            Nodes[i][j] = new NodeAsterisk();
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            Nodes[i][j]->heuristicCost = row + col - 2 - (i + j);
        }
    }
}

void NodeSpawner::generateConnections()
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (Nodes[i][j]->symbol == '*')
            {
                if (j + 1 < col)
                {
                    if (Nodes[i][j + 1]->symbol == '*')
                    {
                        Nodes[i][j]->connections.push_back(Nodes[i][j + 1]);
                    }
                }
                if (j - 1 > 0)
                {
                    if (Nodes[i][j - 1]->symbol == '*')
                    {
                        Nodes[i][j]->connections.push_back(Nodes[i][j - 1]);
                    }
                }
                if (i + 1 < row)
                {
                    if (Nodes[i + 1][j]->symbol == '*')
                    {
                        Nodes[i][j]->connections.push_back(Nodes[i + 1][j]);
                    }
                }
                if (i - 1 > 0)
                {
                    if (Nodes[i - 1][j]->symbol == '*')
                    {
                        Nodes[i][j]->connections.push_back(Nodes[i - 1][j]);
                    }
                }
            }
        }
    }
}

void NodeSpawner::drawNodes()
{
    const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (Nodes[i][j]->isStart)
                SetConsoleTextAttribute(hConsole, 2);
            else if (Nodes[i][j]->isEnd)
                SetConsoleTextAttribute(hConsole, 4);
            else if (Nodes[i][j]->shortestPath)
                SetConsoleTextAttribute(hConsole, 1);
            else
            {
                SetConsoleTextAttribute(hConsole, 0);
            }
            std::cout << "|" << Nodes[i][j]->symbol;
        }
        std::cout << "|";
        std::cout << std::endl;
    }
}
