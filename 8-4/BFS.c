#include <stdio.h>
#include "LinkedQueue.h"
#include "adjList.h"
#include "BFS.h"

// 그래프 g에서 정점 v에 대한 너비 우선 탐색 연산
void BFS_adjList(graphType* g, int v) {
    graphNode* w;
    LQueueType* Q;

    // 큐 생성
    Q = createLinkedQueue();

    // 시작 정점 v에 대한 배열값을 TRUE로 설정
    g->visited[v] = TRUE;
    printf(" %c", v + 65);

    // 현재 정점 v를 큐에 삽입
    enLQueue(Q, v);

    // 큐가 공백이 아닌 동안 너비 우선 탐색 수행
    while (!isLQEmpty(Q)) {
        v = deLQueue(Q);

        // 인접 정점이 있는 동안 수행
        for (w = g->adjList_H[v]; w; w = w->link) {

            // 정점 w가 방문하지 않은 정점인 경우
            if (!g->visited[w->vertex]) {
                g->visited[w->vertex] = TRUE;

                printf(" %c", w->vertex + 65);

                enLQueue(Q, w->vertex);
            }
        }
    }
}
