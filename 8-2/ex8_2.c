#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

int main(void) {
    int i;

    graphType* G1 = (graphType*)malloc(sizeof(graphType));
    graphType* G2 = (graphType*)malloc(sizeof(graphType));
    graphType* G3 = (graphType*)malloc(sizeof(graphType));
    graphType* G4 = (graphType*)malloc(sizeof(graphType));

    // G1 备己
    createGraph(G1);

    for (i = 0; i < 4; i++)
        insertVertex(G1, i);

    insertEdge(G1, 0, 3);
    insertEdge(G1, 0, 1);
    insertEdge(G1, 1, 3);
    insertEdge(G1, 1, 2);
    insertEdge(G1, 1, 0);
    insertEdge(G1, 2, 3);
    insertEdge(G1, 2, 1);
    insertEdge(G1, 3, 2);
    insertEdge(G1, 3, 1);
    insertEdge(G1, 3, 0);

    // G2 备己
    createGraph(G2);

    for (i = 0; i < 3; i++)
        insertVertex(G2, i);

    insertEdge(G2, 0, 2);
    insertEdge(G2, 0, 1);
    insertEdge(G2, 1, 2);
    insertEdge(G2, 1, 0);
    insertEdge(G2, 2, 1);
    insertEdge(G2, 2, 0);

    // G3 备己
    createGraph(G3);

    for (i = 0; i < 4; i++)
        insertVertex(G3, i);

    insertEdge(G3, 0, 3);
    insertEdge(G3, 0, 1);
    insertEdge(G3, 1, 3);
    insertEdge(G3, 1, 2);
    insertEdge(G3, 2, 3);

    // G4 备己
    createGraph(G4);

    for (i = 0; i < 3; i++)
        insertVertex(G4, i);

    insertEdge(G4, 0, 2);
    insertEdge(G4, 0, 1);
    insertEdge(G4, 1, 2);
    insertEdge(G4, 1, 0);

    // 肯己等 牢立 府胶飘 免仿
    printf("\n G1狼 牢立 府胶飘");
    print_adjList(G1);

    printf("\n\n G2狼 牢立 府胶飘");
    print_adjList(G2);

    printf("\n\n G3狼 牢立 府胶飘");
    print_adjList(G3);

    printf("\n\n G4狼 牢立 府胶飘");
    print_adjList(G4);

    getchar();
    return 0;
}
