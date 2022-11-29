#include "AStarAlg.h"
#include "Timer.h"
#include "DijkstraAlg.h"
#include "NodeSpawner.h"

int main()
{
    NodeSpawner spawner;
    DijkstraAlg solverDijkstra;
    AStarAlg solverAStar;
    
    NodeSpawner* ptrSpawner = &spawner;
    
    constexpr int start_row = 0;
    constexpr int start_col = 0;

    spawner.generateNodes();
    spawner.setStart(start_row, start_col);
    spawner.setEnd(NodeSpawner::row - 1, NodeSpawner::col - 1);
    spawner.generateConnections();

    // Timer timerDijkstra = Timer("Dijkstra");
    // solverDijkstra.shortestPath(ptrSpawner);
    // timerDijkstra.Stop();
    
    Timer timerAStar = Timer("AStar");
    solverAStar.shortestPath(ptrSpawner);
    timerAStar.Stop();
    
    spawner.drawNodes();
    
    return 0;
}
