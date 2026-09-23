#pragma once
#include <stdio.h>

#define MAX 10

int insertElement(int L[], int n, int x);
int deleteElement(int L[], int n, int x);

// 원소 삽입
int insertElement(int L[], int n, int x) {
    int i, k = n, move = 0;

    // 삽입 위치 찾기(오름차순 유지)
    for (i = 0; i < n - 1; i++) {
        if (L[i] <= x && x <= L[i + 1]) {
            k = i + 1;
            break;
        }
    }

    // 뒤로 한 칸씩 이동
    for (i = n; i > k; i--) {
        L[i] = L[i - 1];
        move++;
    }

    L[k] = x;
    return move;
}

// 원소 삭제
int deleteElement(int L[], int n, int x) {
    int i, k = n, move = 0;

    // 삭제할 원소 찾기
    for (i = 0; i < n; i++) {
        if (L[i] == x) {
            k = i;
            break;
        }
    }

    // 찾지 못한 경우
    if (k == n)
        return 0;

    // 앞으로 한 칸씩 당기기
    for (i = k; i < n - 1; i++) {
        L[i] = L[i + 1];
        move++;
    }

    return move;
}

// 실행 예제
int main() {
    int L[MAX] = {1, 3, 5, 7, 9};
    int n = 5;
    int i;

    printf("초기 리스트 : ");
    for (i = 0; i < n; i++)
        printf("%d ", L[i]);
    printf("\n");

    // 6 삽입
    insertElement(L, n, 6);
    n++;

    printf("삽입 후 : ");
    for (i = 0; i < n; i++)
        printf("%d ", L[i]);
    printf("\n");

    deleteElement(L, n, 5);
    n--;

    printf("삭제 후 : ");
    for (i = 0; i < n; i++)
        printf("%d ", L[i]);
    printf("\n");

    return 0;
}
